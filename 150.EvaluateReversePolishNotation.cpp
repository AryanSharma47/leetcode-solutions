//Simple Approach
class Solution {
public:
    bool isOp(string ch)
    {
        return (ch == "*"|| ch == "/"|| ch == "+"|| ch == "-");
    }
    int evalRPN(vector<string>& tokens) {
        int ans = 0;
        stack<int> st;

        for(int i=0;i<tokens.size();i++)
        {
            string num = tokens[i];

            if(isOp(num))
            {
                int op1 = st.top(); st.pop();
                int op2 = st.top(); st.pop();

                if(num == "*")
                op1 = op2*op1;
                else if(num == "/")
                op1 = op2/op1;
                else if(num == "+")
                op1 = op2+op1;
                else if(num == "-")
                op1 = op2-op1;

                st.push(op1);
            }
            else
            st.push(stoi(num));
        }
        return st.top();
    }
};
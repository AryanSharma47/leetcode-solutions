//Simple Logic || Using Stack
class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;
        string res;

        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '(')
            st.push(i);

            if(s[i] == ')')
            {
                if(!st.empty())
                st.pop();
                else
                s[i]=' ';
            }
        }

        while(!st.empty())
        {
            s[st.top()]=' ';
            st.pop();
        }

        for(auto c : s)
        {
            if(c != ' ')
            res += c;
        }
        return res;
    }
};
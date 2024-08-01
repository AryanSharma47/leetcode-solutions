//Simple Approach
//Using Stack
class Solution {
public:
    string reverseParentheses(string s) {
        string ans;
        stack<char> st;

        for(auto i : s)
        {
           if(i == ')')
           {
              string rev;
              while(!st.empty() && st.top() != '(')
              {
                rev += st.top();
                st.pop();
              }
              st.pop();

              for(auto j : rev)
              st.push(j);
           }
           else
           st.push(i);
        }
        while(!st.empty())
        {
            ans = st.top()+ans;
            st.pop();
        }
        return ans;
    }
};
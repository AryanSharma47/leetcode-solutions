//Simple Approach
class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        string ans;
        
        for(auto c : s)
        {
            if(!st.empty() && abs(c-st.top()) == 32)
            st.pop();
            else
            st.push(c);
        }

        while(!st.empty())
        {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
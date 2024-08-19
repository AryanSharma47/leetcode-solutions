//Brute Force
//Using Stack
class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int ans = 0;

        for(auto i : s)
        {
            if(i == '(')
            st.push(i);
            else if(i == ')')
            st.pop();

            ans = max(ans,(int)st.size());
        }
        return ans;
    }
};

//Simple Approach
class Solution {
public:
    int maxDepth(string s) {
        int cnt = 0,ans = 0;

        for(auto i : s)
        {
            if(i == '(')
            cnt++;
            else if(i == ')')
            cnt--;

            ans = max(cnt,ans);
        }
        return ans;
    }
};
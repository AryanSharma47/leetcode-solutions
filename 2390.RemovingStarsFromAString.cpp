//First Approach || Time Efficient || TC : O(n)
class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        string ans="";

        for(auto c : s)
        {
            if(c == '*')
            st.pop();
            else
            st.push(c);     
        }

        while(!st.empty()){
        ans += st.top();
        st.pop();
       }
       reverse(ans.begin(),ans.end());
       return ans;
    }
};


//Second Approach || Space Efficient || TC : O(n^2)
class Solution {
public:
    string removeStars(string s) {
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '*')
            {
                s.erase(i,1);
                i--;
                while(i>=0 && s[i]=='*')
                i--;

                s.erase(i,1);
                i--;
            }
        }
        return s;
    }
};
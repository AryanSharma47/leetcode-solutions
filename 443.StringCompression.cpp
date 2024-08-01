//Simple Approach
class Solution {
public:
    int compress(vector<char>& chars) {
        string ans;
        int n = chars.size();

        for(int i=0;i<n;)
        {
            char ch = chars[i];
            ans += ch;
            i++;
            int len = 1;

            while(i<n && ch == chars[i])
            {
                len++;
                i++;
            }
            if(len > 1)
            ans += to_string(len);
        }
        
        for(int i=0;i<ans.size();i++)
        chars[i] = ans[i];

        return ans.size();
    }
};
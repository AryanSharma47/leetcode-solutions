//Simple Approach
class Solution {
public:
    int longestIdealString(string s, int k) {
        vector<int> v(26,0);
        int maxi = 0;

        for(int i=0;i<s.size();i++)
        {
            int curr = s[i]-'a';
            int len = 0;
            for(int j=0;j<26;j++)
            {
                if(abs(curr - j) <= k)
                len = max(len,v[j]);
            }
            v[curr] = max(v[curr],len+1);
            maxi = max(maxi,v[curr]);
        }
        return maxi;
    }
};
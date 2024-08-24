//Simple Approach
//TC : O(n^2)
class Solution {
public:
    int beautySum(string s) {
        int ans = 0,n = s.size();

        for(int i=0;i<n;i++)
        {
            vector<int> mp(26,0);
            for(int j=i;j<n;j++)
            {
                mp[s[j]-'a']++;
                int least = INT_MAX;
                int most = INT_MIN;

                for(auto it : mp)
                {
                    if(it > 0)
                    {
                        least = min(least,it);
                        most = max(most,it);
                    }
                }
                ans += (most-least);
            }
        }
        return ans;
    }
};
//Simple Approach
class Solution {
public:
    string removeKdigits(string num, int k) {
        string ans="";
        ans += num[0];

        for(int i=1;i<num.size();i++)
        {
            if(!ans.empty() && k > 0 && num[i] < ans.back())
            {
                ans.pop_back();
                k--;i--;
                continue;
            }
            else
            ans += num[i];
        }

        while(k--)
        ans.pop_back();

        while(ans[0] == '0')
        ans.erase(ans.begin());

        if(ans.size() == 0)
        ans="0";

        return ans;
    }
};
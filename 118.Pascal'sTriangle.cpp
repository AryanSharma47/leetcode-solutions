//Simple Approach
class Solution {
public:
    vector<vector<int>> ans;
    vector<int> ncr(int n)
    {
        vector<int> res;
        long long num = 1;
        res.push_back(num);

        for(int i=1;i<n;i++)
        {
            num *= (n-i);
            num /= i;
            res.push_back(num);
        }
        return res;
    }
    vector<vector<int>> generate(int numRows) {
        for(int i=1;i<=numRows;i++)
        {
            ans.push_back(ncr(i));
        }
        return ans;
    }
};
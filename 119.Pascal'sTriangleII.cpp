//Simple Approach
class Solution {
public:
    vector<int> ans;
    void ncr(int n)
    {
        long long res = 1;
        ans.push_back(res);
        for(int i=1;i<n;i++)
        {
            res *= (n-i);
            res /= i;
            ans.push_back(res);
        }
    }
    vector<int> getRow(int rowIndex) {
        ncr(rowIndex+1);
        return ans;
    }
};
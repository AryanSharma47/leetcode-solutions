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


//Organised Approach
//Brute Force
class Solution {
public:
    vector<int>rCc(int r,int c)
    {
        vector<int> res;
        int val = 1;
        res.push_back(val);
        for(int i=0;i<c;i++)
        {
            val = val*(r-i);
            val = val/(i+1);

            res.push_back(val);
        }
        return res;
    }
    vector<vector<int>> generate(int num) {
        vector<vector<int>> ans;

        for(int i=1;i<=num;i++)
        {
            ans.push_back(rCc(i-1,i-1));
        }
        return ans;
    }
};
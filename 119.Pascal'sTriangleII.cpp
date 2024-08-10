//Simple Approach
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        long val = 1;
        ans.push_back(val);
        int row = rowIndex+1;

        for(int col=1;col<row;col++)
        {
            val = val*(row-col);
            val = val/col;

            ans.push_back(val);
        }
        return ans;
    }
};


//Brute Force
class Solution {
public:
    vector<int>rCc(int r,int c)
    {
        vector<int> res;
        long val = 1;
        res.push_back(val);

        for(int i=0;i<c;i++)
        {
            val = val*(r-i);
            val = val/(i+1);

            res.push_back(val);
        }
        return res;
    }

    vector<int> getRow(int rowIndex) {
        return rCc(rowIndex,rowIndex);
    }
};
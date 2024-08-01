//Simple Approach
class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& mat) {
       vector<int> mini,maxi;
       int n = mat.size(),m = mat[0].size();  

       for(int i=0;i<n;i++)
       {
        int minEle = *min_element(mat[i].begin(),mat[i].end());
        mini.push_back(minEle);
       }

       for(int j=0;j<m;j++)
       {
        int maxEle = mat[0][j];
        for(int i=1;i<n;i++)
        {
            if(maxEle < mat[i][j])
            maxEle = mat[i][j];
        }
        maxi.push_back(maxEle);
       }
       
       vector<int> luckyNum;
       for(int i=0;i<n;i++)
       {
        for(int j=0;j<m;j++)
        {
            if(mat[i][j] == mini[i] && mat[i][j] == maxi[j])
            luckyNum.push_back(mat[i][j]);
        }
       }
       return luckyNum;
    }
};
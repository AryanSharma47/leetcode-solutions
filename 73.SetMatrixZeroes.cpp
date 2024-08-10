//Simple Approach
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>> mat = matrix;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j] == 0)
                {
                    for(int k=0;k<m;k++)
                        mat[i][k]=0;

                    for(int k=0;k<n;k++)
                        mat[k][j]=0;
                }
            }
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                matrix[i][j]=mat[i][j];
            }
        }
    }
};

//Second Approach || O(1) Space
class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int n = mat.size(),m = mat[0].size();
        vector<int> rows(n,1);
        vector<int> cols(m,1);

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j] == 0)
                {
                    rows[i]=0;cols[j]=0;
                }
            }
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(rows[i] == 0 || cols[j] == 0)
                mat[i][j] = 0;
            }
        }
    }
};
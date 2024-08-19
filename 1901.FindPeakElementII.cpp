//Binary Search
//TC : O(log(m)*n)
class Solution {
public:
    int maxEle(vector<vector<int>> arr,int n,int col)
    {
        int maxVal = -1,ind = -1;
        for(int i=0;i<n;i++)
        {
            if(arr[i][col] > maxVal)
            {
                maxVal = arr[i][col];
                ind = i;
            }
        }
        return ind;
    }

    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size(),m = mat[0].size();
        int low = 0,high = m-1;

        while(low <= high)
        {
            int mid = (low+high) >> 1;
            int row = maxEle(mat,n,mid);

            int left = mid-1 >= 0 ? mat[row][mid-1] : -1;
            int right = mid+1 < m ? mat[row][mid+1] : -1;

            if(mat[row][mid] > left && mat[row][mid] > right)
            return {row,mid};
            else if(mat[row][mid] < left)
            high = mid-1;
            else
            low = mid+1;
        }
        return {-1,-1};
    }
};
//Simple Approach
//TC : O(n*Log(m))
class Solution {
public:
    bool binarySearch(vector<int> arr,int target)
    {
        int low = 0,high  = arr.size()-1;
        while(low <= high)
        {
            int mid = (low+high) >> 1;

            if(arr[mid] == target)
            return true;
            else if(arr[mid] < target)
            low = mid+1;
            else
            high = mid-1;
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n = mat.size(),m = mat[0].size();
        for(int i=0;i<n;i++)
        {
            if(mat[i][0] <= target && target <= mat[i][m-1])
            {
                if(binarySearch(mat[i],target))
                return true;
            } 
        }
        return false;
    }
};

//Optimal Approach
//TC : O(n+m)
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n = mat.size(),m = mat[0].size();
        int row = 0,col = m-1;

        while(row < n && col >= 0)
        {
            if(mat[row][col] == target)
            return true;

            if(mat[row][col] < target)
            row++;
            else
            col--;
        }
        return false;
    }
};
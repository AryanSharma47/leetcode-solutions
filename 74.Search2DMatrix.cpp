//Brute Force
//TC : O(n*m)
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n = mat.size(),m = mat[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j] == target)
                return true;
            }
        }
        return false;
    }
};


//Better Approach
//TC : O(n*log(m))
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
            return binarySearch(mat[i],target);
        }
        return false;
    }
};


//Optimal Approach
//TC : O(log(n*m))
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n = mat.size(),m = mat[0].size();

        int low = 0,high = n*m-1; // Flattened to 1D Array (hypothetically)
        while(low <= high)
        {
            int mid = (low+high) >> 1;
            int row = mid/m , col = mid%m;

            if(mat[row][col] == target)
            return true;
            else if(mat[row][col] < target)
            low = mid+1;
            else
            high = mid-1;
        }
        return false;
    }
};
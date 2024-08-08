//Brute Force
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        for (int i = 0; i < arr.size(); i++) 
        {
        if (arr[i] <= k) k++; //shifting k
        else break;
        }
    return k;
    }
};

//Using Binary Search
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low = 0,high = arr.size()-1;

        while(low <= high)
        {
            int mid = (low+high)/2;
            int missing = arr[mid]-(mid+1);

            if(missing < k)
            low = mid+1;
            else
            high = mid-1;
        }
        return low+k;  //or k+high+1;
    }
};
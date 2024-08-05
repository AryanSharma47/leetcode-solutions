//Simple Binary Search Solution
class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n = arr.size();

        if(n == 1)    return arr[0];
        if(arr[0] != arr[1])  return arr[0];          // Base case for the first element
        if(arr[n-1] != arr[n-2])   return arr[n-1];   // Edge case for the last element

        int low = 1,high = n-2;
        while(low <= high)
        {
            int mid = (low+high)/2;

            //If mid is single element
            if(arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1])
            return arr[mid];

            //We are on left side so eliminate left (even,odd)
            //as answer will be on right side
            if((mid%2 == 1 && arr[mid] == arr[mid-1]) || mid%2 == 0 && arr[mid] == arr[mid+1])
            low = mid+1;
            //We are on right side so eliminate left (odd,even)
            //as answer will be on left side
            else
            high = mid-1;
        }
        return -1;
    }
};

Arrays.sort(arr);
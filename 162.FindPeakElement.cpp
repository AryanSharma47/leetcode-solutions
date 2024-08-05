//Simple Binary Search Modification
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();

        if(n == 1)  return 0;
        if(nums[0] > nums[1])  return 0;
        if(nums[n-1] > nums[n-2])  return n-1;

        int low = 1,high = n-2;
        while(low <= high)
        {
            int mid = (low+high)/2;
            
            //if mid is peak element
            if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1])     
            return mid;
            //if it is in increasing slope that means
            //peak is on right side
            else if(nums[mid] > nums[mid-1])                          
            low = mid+1;
            //if it is in decreasing slope that means
            //peak is on left side
            else
            high = mid-1;
        }
        return -1;
    }
};
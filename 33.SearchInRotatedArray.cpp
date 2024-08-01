//Easy Approach|| Beats 100% Users 💯|| Time Complexity : O(log n)
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size()-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(nums[mid]==target)
            return mid;
            if(nums[l]<=nums[mid])
            {
                if(nums[l]<=target && target<=nums[mid])
                r=mid-1;
                else
                l=mid+1;
            }
            if(nums[mid]<=nums[r])
                {
                    if(nums[mid]<=target && target<=nums[r])
                    l=mid+1;
                    else
                    r=mid-1;
                }
            
        }
        return -1;
    }
};
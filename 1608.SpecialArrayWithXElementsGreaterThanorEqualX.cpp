//Simple Approach
class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n = nums.size();
        int ans = -1;
        int low = 1, high = n;

        while(low <= high)
        {
            int mid = low+(high-low)/2;
            int count = 0;

            for(auto i : nums)
            {
                if(i >= mid)
                count++;
            }

            if(count == mid)
            {
                ans = count;
                break;
            }
            else if(count > mid)
            {
                low = mid+1;
            }
            else
            {
                high = mid-1;
            }
        }
        return ans;
    }
};
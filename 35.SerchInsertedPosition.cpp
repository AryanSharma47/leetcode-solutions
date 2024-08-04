//Simple Logic of Lower Bound
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto lb = lower_bound(nums.begin(),nums.end(),target);
        return lb-nums.begin();
    }
};


//Full Code
class Solution {
public:
    int searchInsert(vector<int>& nums, int x) {
    int low = 0,high = nums.size()-1;
	int ans = nums.size();


	while(low <= high)
	{
		int mid = (low+high)/2;

		if(nums[mid] >= x)
		{
			ans = mid;
			high = mid-1;
		}
		else
		{
			low = mid+1;
		}
	}
	return ans;
    }
};
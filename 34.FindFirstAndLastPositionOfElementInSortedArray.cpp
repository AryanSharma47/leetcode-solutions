//Using Lower Bound and Upper Bound
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int lb = (lower_bound(nums.begin(),nums.end(),target)) - nums.begin();
        int ub = (upper_bound(nums.begin(),nums.end(),target)) - nums.begin()-1;

        if(lb == nums.size() || nums[lb] != target)
        return {-1,-1};
        else
        return {lb,ub};
    }
};


//Uisng Binary Search
class Solution {
public:
    int First(vector<int> arr,int x)
    {
        int low = 0,high = arr.size()-1,first = -1;

        while(low <= high)
        {
            int mid = (low+high)/2;

            if(arr[mid] == x)
            {
                first = mid;
                high = mid-1;
            }
            else if(arr[mid] < x)
            low = mid+1;
            else
            high = mid-1;
        }
        return first;
    }

    int Last(vector<int> arr,int x)
    {
        int low = 0,high = arr.size()-1,last = -1;

        while(low <= high)
        {
            int mid = (low+high)/2;

            if(arr[mid] == x)
            {
                last = mid;
                low = mid+1;
            }
            else if(arr[mid] < x)
            low = mid+1;
            else
            high = mid-1;
        }
        return last;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int first = First(nums,target);
        int last = Last(nums,target);

        return {first,last};
    }
};
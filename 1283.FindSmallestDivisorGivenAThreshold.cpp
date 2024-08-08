//Binary Search Approach
class Solution {
public: 
    bool possible(vector<int> arr,int sum,int div)
    {
        int ans = 0;

        for(int i=0;i<arr.size();i++)
        ans += ceil((double)(arr[i]) / (double)(div));

        return ans <= sum;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1,high = *max_element(nums.begin(),nums.end());

        while(low <= high)
        {
            int mid = (low+high)/2;

            if(possible(nums,threshold,mid))
            high = mid-1;
            else
            low = mid+1;
        }
        return low;
    }
};
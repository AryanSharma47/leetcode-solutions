//Binary Search
class Solution {
public:
    int isPossible(vector<int> arr,int total)
    {
        int cnt = 1;
        long long sum = 0;

        for(int i=0;i<arr.size();i++)
        {
            if(sum+arr[i] <= total)
            {
                sum += arr[i];
            }
            else
            {
                sum = arr[i];
                cnt++;
            }
        }
        return cnt;
    }

    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(),nums.end());
        int high = accumulate(nums.begin(),nums.end(),0);

        while(low <= high)
        {
            int mid = (low+high)/2;
            int subArrays = isPossible(nums,mid);

            if(subArrays > k)
            low = mid+1;
            else
            high = mid-1;
        }
        return low;
    }
};
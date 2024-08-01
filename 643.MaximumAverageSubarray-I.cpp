//Sliding Window Approach
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        int s = nums.size();

        for(int i=0;i<k;i++)
        sum += nums[i];

        double avg = sum/k;

        for(int i=k;i<s;i++)
        {
            sum = sum-nums[i-k]+nums[i];
            avg = max(avg,sum/k);
        }
        return avg;
    }
};
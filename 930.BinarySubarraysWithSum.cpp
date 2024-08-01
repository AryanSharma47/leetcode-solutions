//Simple Approach using Brute Force
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int c=0,n=nums.size();
        for(int i=0;i<n;i++)
        {
            int sum=0,flag=0;
            for(int j=i;j<n;j++)
            {
                sum+=nums[j];
                if(sum==goal)
                {
                    c++;
                    int e=++j;
                    flag=1;
                    while(e<n && nums[e]==0)
                    {
                        e++;
                        c++;
                    }
                    break;
                }
            }
            if(flag==0 && goal!=0)
            break;
        }
        return c;
    }
};
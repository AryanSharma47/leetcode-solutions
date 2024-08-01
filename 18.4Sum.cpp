//Simple Approach
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> st;
        int n = nums.size();

        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                set<long long> hashSet;
                for(int k=j+1;k<n;k++)
                {
                    long long sum = nums[i] + nums[j];
                    sum += nums[k];
                    long long fourth = target - sum;

                    if(hashSet.find(fourth) != hashSet.end())
                    {
                        vector<int> temp = {nums[i],nums[j],nums[k],(int)(fourth)};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                    hashSet.insert(nums[k]);
                }
            }
        }
        vector<vector<int>> ans(st.begin(),st.end());
        return ans;
    }
};

//Optimal Solution
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;

        for(int i=0;i<n-1;i++)
        {
            if(i > 0 && nums[i] == nums[i-1])
            continue;
            for(int j=i+1;j<n;j++)
            {
                if(j > (i+1) && nums[j] == nums[j-1])
                continue;

                int low = j+1,high = n-1;
                while(low < high)
                {
                    long long sum = nums[i];
                    sum += nums[j];
                    sum += nums[low];
                    sum += nums[high];

                    if(sum == target)
                    {
                        vector<int> temp = {nums[i],nums[j],nums[low],nums[high]};
                        ans.push_back(temp);
                        low++;high--;

                        while(low < high && nums[low] == nums[low-1])
                        low++;

                        while(low < high && nums[high] == nums[high+1])
                        high--;
                    }
                    else if(sum < target)
                    low++;
                    else
                    high--;
                }
            }
        }
        return ans;
    }
};
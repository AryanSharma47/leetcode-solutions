//Brute Force
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>> st;

        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    if(nums[i] + nums[j] + nums[k] == 0)
                    {
                        vector<int> temp = {nums[i],nums[j],nums[k]};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                } 
            }
        }
        vector<vector<int>> ans(st.begin(),st.end());
        return ans;
    }
};


//Better Approach
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>> st;

        for(int i=0;i<n;i++)
        {
            set<int> hashSet;
            for(int j=i+1;j<n;j++)
            {
                int third = -(nums[i]+nums[j]);
                if(hashSet.find(third) != hashSet.end())
                {
                    vector<int> temp = {nums[i],nums[j],third};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
                hashSet.insert(nums[j]);
            }
        }
        vector<vector<int>> ans(st.begin(),st.end());
        return ans;
    }
};

//Optimal Approach
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;

        for(int i=0;i<n-1;i++)
        {
            if(i > 0 && nums[i] == nums[i-1])
            continue;

            int low = i+1,high = n-1;
            while(low < high)
            {
                int sum = nums[i]+nums[low]+nums[high];

                if(sum < 0)
                low++;
                else if(sum > 0)
                high--;
                else
                {
                    ans.push_back({nums[i],nums[low],nums[high]});
                    low++;high--;

                    while(low < high && nums[low] == nums[low-1])
                    low++;

                    while(low < high && nums[high] == nums[high+1])
                    high--;
                }
            }
        }
        return ans;
    }
};
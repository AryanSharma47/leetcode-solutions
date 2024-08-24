//Naive Approach
//TC : O(n)
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        string range = "";
        bool flag = true;

        if(nums.empty())
        return ans;

        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i] == nums[i+1]-1 && flag)
            {
                range = to_string(nums[i])+"->";
                flag = false;
            }
            else if(nums[i] != nums[i+1]-1 && !flag)
            {
                range += to_string(nums[i]);
                ans.push_back(range);
                range = "";
                flag = true;
            }
            else if(flag)
            {
                ans.push_back(to_string(nums[i]));
            } 
        }
        range += to_string(nums[nums.size()-1]);
        ans.push_back(range);
        return ans;
    }
};

//Simple And Clean
//TC : O(n)
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        
        for(int i=0;i<nums.size();i++)
        {
            int start = nums[i];

            while(i<nums.size()-1 && nums[i] == nums[i+1]-1)
            i++;

            int end = nums[i];

            if(start == end)
            ans.push_back(to_string(start));
            else
            ans.push_back(to_string(start)+"->"+to_string(end));
        }
        return ans;
    }
};
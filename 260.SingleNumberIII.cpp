//First Approach || Using Hash Table
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
       vector<int> v;
       unordered_map<int,int> count;

       for(auto i : nums)
       count[i]++;

       for(const auto& i : count)
       {
           if(i.second==1)
           v.push_back(i.first);
       }
       return v;
    }
};

//Second Approach || Using Sort Function
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
       vector<int> v;
       sort(nums.begin(),nums.end());
       int i=0;
      while(i<nums.size()-1)
       {
           if(nums[i]==nums[i+1])
           i+=2;
           else
           {
           v.push_back(nums[i++]);
           if(v.size()==2)
           break;
           }
       }
       if(v.size()==1)
       v.push_back(nums[nums.size()-1]);
       
       return v;
    }
};
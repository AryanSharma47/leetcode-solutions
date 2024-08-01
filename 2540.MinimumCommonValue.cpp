//Best Solution || Time Complexity : O(n+m)
class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> count;
        
       for(auto num : nums1)
       count[num]++;

       for(auto num : nums2)
       {
           if(count[num]>0)
            return num;
       }
       return -1;
    }
};
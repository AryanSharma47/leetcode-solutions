//Best Approach || Beats 85% users || Simple Logic
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> count;
        int maxFreq=0;
        for(auto i : nums)
        {
          count[i]++;
          maxFreq=max(maxFreq,count[i]);
        }
        int c=0;
        for(const auto& j : count)
        {
            if(j.second==maxFreq)
            c++;
        }
        c=c*maxFreq;
        return c;
    }
};
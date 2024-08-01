//Simple Approach
class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int,int> mp;
        
        for(auto i : arr)
        {
            int r = (i%k + k)%k;
            mp[r]++;
        }
        
        for(auto i : arr)
        {
            int r = (i%k + k)%k;
            int c = (k-r)%k;
            
            if((r==c && mp[r]%2!=0) || (r!=c && mp[c]!=mp[r]))
            return false;
        }
        return true;
    }
};
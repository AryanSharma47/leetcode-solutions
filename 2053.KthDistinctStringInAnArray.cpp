//Simple Solution
class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
      unordered_map<string,int> mp;
      for(auto i : arr)
      mp[i]++;

      for(auto j : arr)
      {
        if(mp[j] == 1)
        k--;

        if(k == 0)
        return j;
      }  
      return "";
    }
};
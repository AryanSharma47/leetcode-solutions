//First Approach using adjacent_find function
class Solution {
public:
    bool containsDuplicate(vector<int>& num)
    {
       vector<int>::iterator it;
       sort(num.begin(),num.end());
       it=adjacent_find(num.begin(),num.end());
       
       if(it==num.end())
       return 0;
       else
       return 1;
    }
};


//Second Approach using Hash Table
class Solution {
public:
    bool containsDuplicate(vector<int>& num)
    {
       unordered_map<int,int> mp;
       for(auto i : num)
       {
         mp[i]++;
         if(mp[i]>1)
         return true;
       }
       return false;
    }
};
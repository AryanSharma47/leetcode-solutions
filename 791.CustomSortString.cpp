//Beats 100% Users || Simple Approach Using Hash Table
class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int> mp;
        string str="";

        for(auto i : s)
        mp[i]++;

        for(auto i : order)
        {
            if(mp.find(i)!=mp.end())
            {
               while(mp[i]--)
                str+=i;   
            }
        }

        for(auto i : mp)
        {
            while(i.second > 0)
            {
            str+=i.first;
            i.second--;
            }
        }
          return str;
     }
  };

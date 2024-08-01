//Easiest Approach
class Solution {
public:
    bool isSubstringPresent(string s) {
       int n=s.size();
       unordered_map<string,int> mp;

       for(int i=0;i<n-1;i++)
       {
        string sub="";
        sub+=s[i];
        sub+=s[i+1];
        mp[sub]++;
       } 

       reverse(s.begin(),s.end());
       
       for(int i=0;i<n-1;i++)
       {
        string sub="";
        sub+=s[i];
        sub+=s[i+1];
        if(mp.find(sub)!=mp.end())
        return true;
       }
       return false;
    }
};
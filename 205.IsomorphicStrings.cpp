//Eassiest Approach 
class Solution {
public:
    bool isIsomorphic(string s, string t) {
         unordered_map<char,int> mp1;
         unordered_map<char,int> mp2;
         for(int i=0;i<s.length();i++)
         {
            if((mp1[s[i]] && mp1[s[i]] != t[i]) || (mp2[t[i]] && mp2[t[i]] != s[i]))
            return false;

            mp1[s[i]]=t[i];
            mp2[t[i]]=s[i];
         }
        return true;
    }
};

//Optimal Approach
//TC : O(n) || SC : O(1)
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size())
        return false;

        vector<int> v1(127,0);
        vector<int> v2(127,0);

        for(int i=0;i<s.size();i++)
        {
            if(v1[s[i]] != v2[t[i]])
            return false;

            v1[s[i]] = i+1;
            v2[t[i]] = i+1;
        }
        return true;
    }
};
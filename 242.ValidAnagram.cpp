//Easiest Approach 
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;

        for(auto i : s)
        mp[i]++;

        for(auto i : t)
        {
            if(mp[i])
              mp[i]--;

            else
              mp[i]++;
        }

        for(const auto& num : mp)
        {
            if(num.second > 0)
            return false;
        }
        return true;
    }
};

//Second Approach
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        return (s == t);
    }
};

//Third Approach
//SC : O(1)
class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> v(26,0);

        for(auto i : s)
        v[i-'a']++;

        for(auto i : t)
        v[i-'a']--;

        for(auto i : v)
        {
            if(i != 0)
            return false;
        }
        return true;
    }
};
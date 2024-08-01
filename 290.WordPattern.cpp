//Easiest Approach
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<string,int>mp1;
        unordered_map<char,string>mp2;
        vector<string> ans;

        for(int i=0;i<s.size();i++)
        {
            string temp="";
            while(i<s.size() && s[i]!=' ')
                temp+=s[i++];

            ans.push_back(temp);  
        }

        if(pattern.size() != ans.size())
        return false;

        for(int i=0;i<pattern.size();i++)
        {
            mp1.insert(pair<string,int>(ans[i],0));
            if(mp1[ans[i]] == 0)
            {
                mp2.insert(pair<char,string>(pattern[i],ans[i]));
                mp1[ans[i]]=1;
            }
            if(ans[i] != mp2[pattern[i]])
            return false;
        }
        return true;
    }
};
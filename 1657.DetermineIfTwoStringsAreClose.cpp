//Simple Approach
class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int> v1(26,0),v2(26,0);

        if(word1.size() != word2.size())
        return false;

        for(int i=0;i<word1.size();i++)
        {
            v1[word1[i]-'a']++;
            v2[word2[i]-'a']++;
        }

        for(int i=0;i<26;i++)
        {
            if(v1[i] != 0 && v2[i] == 0 || v1[i] == 0 && v2[i] != 0)
            return false;
        }

        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());

        for(int i=0;i<26;i++)
        {
            if(v1[i] != v2[i])
            return false;
        }
        return true;
    }
};
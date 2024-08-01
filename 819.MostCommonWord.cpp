//Easiest Appraoch using Hash Table || Beginners Friendly
class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_map<string,int> mp;
        int n=paragraph.size();
        for(int i=0;i<n; )
        {
            string s="";
            while(i<n && isalpha(paragraph[i]))
            s+=tolower(paragraph[i++]);

            while(i<n && !isalpha(paragraph[i]))
            i++;

            mp[s]++;
        }

        for(auto i : banned)
        mp[i]=0;

        int max=INT_MIN;
        string res="";
        for(auto it : mp)
        {
            if(it.second > max)
            {
                res=it.first;
                max=it.second;
            }
        }
        return res;
    }
};
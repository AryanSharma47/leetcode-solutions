//Easiest Approach
class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        sort(str.begin(),str.end());

        int n=str.size();
        string ans="";
        string first=str[0],end=str[n-1];

        for(int i=0;i<end.size();i++)
        {
            if(first[i]!=end[i])
            return ans;

            ans+=first[i];
        }
        return ans;
    }
};
//Brute Force
class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        if (str.empty()) 
        return "";
        
        string prefix = str[0];
        
        for (int i = 1; i < str.size(); ++i) 
        {
            // Check if the current prefix is not a prefix of strs[i]
            while (str[i].find(prefix) != 0) 
            {   
                prefix = prefix.substr(0, prefix.size() - 1); // Reduce the prefix by one character
                if (prefix.empty()) 
                return ""; // No common prefix
            }
        }
        
        return prefix;
    }
};


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
//Easiest Approach || Using Recursion
class Solution {
public:
    int minExtraCharHelper(string s, vector<string>& dict, unordered_map<string,int> &memo)
    {
        if(s.empty())
        return 0;

        if(memo.count(s))
        return memo[s];

        int minExtra=s.length();

        for(const auto &word : dict)
        {
            size_t found=s.find(word);

            if(found==0)
            {
                int extra=minExtraCharHelper(s.substr(word.length()),dict,memo);
                minExtra=min(minExtra,extra);
            }

            if(found!=string::npos)
            {
                int extra1=found;
                int extra2=minExtraCharHelper(s.substr(found+word.length()),dict,memo);
                minExtra=min(minExtra,extra1+extra2);
            }
        }
        memo[s]=minExtra;
        return minExtra;
    }

    int minExtraChar(string s, vector<string>& dict) {
        sort(dict.begin(),dict.end(),[] (const string &a,const string &b){
            return a.length() > b.length();
        });

        unordered_map<string,int> memo;

        return minExtraCharHelper(s,dict,memo);
    }
};
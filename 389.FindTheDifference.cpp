//Approach-1 || Best Solution || Beats 100% users
class Solution {
public:
    char findTheDifference(string s, string t) {
        char alp[26]={0};
        char ans;

        for(auto i : t)
         alp[i-'a']++;

         for(auto i : s)
         alp[i-'a']--;


         for(int i=0;i<26;i++)
         {
             if(alp[i]!=0)
             {
                 ans=i+'a';
                 break;
             }
         }
         return ans;

        
    }
};


//Second Approach Using Hash Table
class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> count1;
        unordered_map<char,int> count2;


        for(auto c : s)
        count1[c]++;

        for(auto d : t)
        count2[d]++;
        
        if(count1.size()==1 && count2.size()==1)
        return t[t.size()-1];
        
        char res='\0';
        for(const auto& it : count2)
        {
            if(count1[it.first] != count2[it.first]){
            res=it.first;
            break;
            }
        }
        return res;
    }
};

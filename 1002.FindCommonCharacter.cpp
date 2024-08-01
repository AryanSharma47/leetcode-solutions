//Best Solution || Simple Approach Using 2 Vectors
class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
       vector<int> v1(26,0);
       vector<int> v2(26,0);
       vector<string> ans;

       for(auto i : words[0])
         v1[i-'a']++;

         for(int i=1;i<words.size();i++)
         {
             for(auto c : words[i])
               v2[c-'a']++;

             for(int i=0;i<26;i++)
             {
                 v1[i]=min(v1[i],v2[i]);
                 v2[i]=0;
             }
         } 

         for(int i=0;i<26;i++)
         {
             while(v1[i]--)
             {
                 char c=i+'a';
                 ans.push_back({c});
             }
         }
         return ans;
    }
};
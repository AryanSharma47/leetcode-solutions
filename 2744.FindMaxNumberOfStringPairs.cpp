//First Approach Using Hash Table
class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
       unordered_map<string,int> mp;
       int c=0;
       for(int i=0;i<words.size();i++)
       {
        sort(words[i].begin(),words[i].end());
        mp[words[i]]++;
       } 

       for(auto num : mp)
       {
        if(num.second > 1)
        c++;
       }
       return c;
    }
};


//Second Approach Using Brute Force
class Solution {
public:
int maximumNumberOfStringPairs(vector<string>& words) {
    int n=words.size();
    int cnt=0;
    
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            string rev=words[j];
            reverse(rev.begin(), rev.end());
            if(words[i]==rev) 
                cnt++;   
        }
    }
    return cnt;
  }
};
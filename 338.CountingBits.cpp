//Simple Approach Using Bit Manipulation
class Solution {
public:
    vector<int> countBits(int n) {
       vector<int> v;
       for(int i=0;i<=n;i++)
       {
           int j=i,c=0;
           while(j)
           {
               if(j&1==1)
               c++;
               
               j>>=1;
           }
           v.push_back(c);       
       } 
       return v;
    }
};
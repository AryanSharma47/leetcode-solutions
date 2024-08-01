//Simplest Approach
class Solution {
public:
    int minimumLength(string s) {
       int n=s.size();
       int minLength=0;
       int i=0,j=n-1;
       while(i<j)
       {
        if(s[i]!=s[j])
        break;

        char ch=s[i];
        while(i<=j && s[i]==ch)
        i++;

        while(j>=i && s[j]==ch)
        j--;
       } 
       return j-i+1;
    }
};
//Simplest Approach
class Solution {
public:
    int lengthOfLastWord(string s) {
        int c=0;
        int i=s.size()-1;

        while(i>=0)
        {
           if(s[i]!=' ')
           c++;

           if(s[i]==' ' && c!=0)
           break; 

           i--;
        }
        return c;
    }
};
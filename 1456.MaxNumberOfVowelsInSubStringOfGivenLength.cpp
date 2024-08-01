//Sliding Window Approach
class Solution {
public:
    bool isVowel(char ch)
    {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }

    int maxVowels(string s, int k) {
        int maxVowel = 0,len = 0;
        int size = s.size();
        for(int i=0;i<k;i++)
        {
            if(isVowel(s[i]))
            len++;
        }
        maxVowel = max(len,maxVowel);
        
        for(int i=k;i<size;i++)
        {
            if(isVowel(s[i-k]))
            len--;
            if(isVowel(s[i]))
            len++;

            maxVowel = max(maxVowel,len);
        }
        return maxVowel;
    }
};
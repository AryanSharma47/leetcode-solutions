//Brute Force
//TC : O(n^3)
class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if (n <= 1) return s;  

        int maxLen = 1;  
        string res = s.substr(0, 1);  // Initialize with the first character.

        for (int i = 0; i < n - 1; i++) {  
            for (int j = i + 1; j < n; j++) {  
                int start = i, end = j;
                bool isPalindrome = true;

                // Check if the substring s[i...j] is a palindrome.
                while (start <= end) 
                {
                    if (s[start] != s[end]) 
                    {
                        isPalindrome = false;
                        break;
                    }
                    start++;
                    end--;
                }

                // Update the longest palindrome found.
                if (isPalindrome && (j - i + 1) > maxLen) 
                {
                    maxLen = j - i + 1;
                    res = s.substr(i, maxLen);
                }
            }
        }
        return res;
    }
};

//Optimal Approach
//TC : O(n^2)
class Solution {
public:
    int expandAroundCenter(string str,int l,int r)
    {
        while(l>=0 && r<str.size() && str[l] == str[r])
        {
            l--;r++;
        }
        return r-l-1;
    }

    string longestPalindrome(string s) {
        int n = s.size();
        int start = 0,end = 0;

        if(n <= 1)   return s;

        for(int i=0;i<n;i++)
        {
            //check for odd length palindrome centered at i
            int len1 = expandAroundCenter(s,i,i);
            //check for even length palindrome centered b/w i and i+1
            int len2 = expandAroundCenter(s,i,i+1);

            int maxLen = max(len1,len2);
            // Update the start and end indices if a longer palindrome is found.
            if(maxLen > (end-start))
            {
                start = i-(maxLen-1)/2;
                end = i+(maxLen)/2;
            }
        }
        return s.substr(start,end-start+1);
    }
};
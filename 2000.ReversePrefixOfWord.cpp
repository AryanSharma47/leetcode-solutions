//Simple Approach
class Solution {
public:
    string reversePrefix(string word, char ch) {
        int end = 0;
        for(auto i : word)
        {
            if(i == ch)
            {
                reverse(word.begin(),word.begin()+end+1);
                break;
            }
            end++;
        }
        return word;
    }
};
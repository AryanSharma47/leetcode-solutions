// Greedy || Simple Approach
class Solution {
public:
    bool checkValidString(string s) {
        int open=0,maxOpen=0;

        for(auto c : s)
        {
            if(c == '(')
            {
                open++;
                maxOpen++;
            }
            else if(c == ')')
            {
                open=max(open-1,0);
                maxOpen--;

                if(maxOpen < 0)
                return false;
            }
            else if(c == '*')
            {
                open=max(open-1,0);
                maxOpen++;
            }
        }
        return open == 0;
    }
};

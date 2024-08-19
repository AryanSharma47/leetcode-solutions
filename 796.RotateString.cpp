//Brute Force
// TC : O(n^2) || SC : O(1)
class Solution {
public:
    void rotate(string &str)
    {
        char last = str[0];
        int i=0;
        for(i=0;i<str.size()-1;i++)
        str[i] = str[i+1];

        str[i] = last;
    }

    bool rotateString(string s, string goal) {
        int n = s.size();

        for(int i=0;i<n;i++)
        {
            rotate(s);
            if(s.compare(goal) == 0)
            return true;
        }
        return false;
    }
};

//Optimal Approach
//TC : O(n) || SC : O(n)
class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size())
        return false;
        
        string res = s+s;

        if(res.find(goal) == string::npos)
        return false;
        else
        return true;
    }
};
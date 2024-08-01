//Simple Approach
class Solution {
public:
    int maximumGain(string s, int x, int y) {
        vector<char> st,st2;
        string first,second;
        int first_score,second_score,score = 0;

        if(y > x)
        {
            first = "ba";
            first_score = y;
            second = "ab";
            second_score = x;
        }
        else
        {
            first = "ab";
            first_score = x;
            second = "ba";
            second_score = y;
        }

        for(auto i : s)
        {
            if(i == first[1] && !st.empty() && st.back() == first[0])
            {
                score += first_score;
                st.pop_back();
            }
            else
            {
                st.push_back(i);
            }
        }
        for(auto j : st)
        {
            if(j == second[1] && !st2.empty() && st2.back() == second[0])
            {
                score += second_score;
                st2.pop_back();
            }
            else
            {
                st2.push_back(j);
            }
        }
        return score;
    }
};
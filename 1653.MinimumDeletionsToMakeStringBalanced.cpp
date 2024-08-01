//First Approach || SC : O(1)
class Solution {
public:
    int minimumDeletions(string s) {
        int count = 0,B = 0;
        for(auto i : s)
        {
            if(i == 'b')
            B++;
            else
            count = min(count+1,B);
        }
        return count;
    }
};

//Second Approach || SC : O(n)
class Solution {
public:
    int minimumDeletions(string s) {
        stack<char> st; 
        int deletionCount = 0;

        for (char c : s) {
            if (c == 'b') 
            st.push(c);
            else if (c == 'a' && !st.empty()) 
            {
                st.pop();
                deletionCount++;
            }
        }
        return deletionCount;
    }
};
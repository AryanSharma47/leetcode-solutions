//Simplest Approach
class Solution {
public:
    int countStudents(vector<int>& stu, vector<int>& san) {
        stack<int> st;
        queue<int> q;

        for(auto i : stu)
        q.push(i);

        for(int i=san.size()-1;i>=0;i--)
        st.push(san[i]);

        int c=0;

        while(q.size())
        {
            if(q.front() == st.top())
            {
                q.pop();
                st.pop();
                c=0;
            }
            else
            {
                q.push(q.front());
                q.pop();
                c++;
                if(c == q.size())
                break;
            }
        }
        return c;
    }
};
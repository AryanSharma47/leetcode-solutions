//Simple Approach
class Solution {
public:
    
    vector<int> nextSmallElement(vector<int> v,int n)
    {
        stack<int> s;
        vector<int> ans(n);

        s.push(-1);

        for(int i=n-1;i>=0;i--)
        {
            while(s.top() != -1 && v[s.top()] >= v[i])
            s.pop();

            ans[i]=s.top();
            s.push(i);
        }
        return ans;
    }

    vector<int> prevSmallElement(vector<int> v,int n)
    {
        stack<int> s;
        vector<int> ans(n);

        s.push(-1);

        for(int i=0;i<n;i++)
        {
            while(s.top() != -1 && v[s.top()] >= v[i])
            s.pop();

            ans[i]=s.top();
            s.push(i);
        }
        return ans;
    }

    int maxArea(vector<int> histogram)
    {
        int area=INT_MIN;
        int n=histogram.size();

        vector<int> next = nextSmallElement(histogram,n);
        vector<int> prev = prevSmallElement(histogram,n);

        for(int i=0;i<n;i++)
        {
            int len=histogram[i];
            if(next[i] == -1)
            next[i]=n;

            int bre=next[i]-prev[i]-1;

            area=max(area,len*bre);
        }
        return area;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {
        int maxi=INT_MIN;
        
        //of column size to store heights of each column
        vector<int> histogram(matrix[0].size(),0);

        for(int i=0;i<matrix.size();i++)
        {
            //Creating histogram array
            for(int j=0;j<histogram.size();j++)
            {
                if(matrix[i][j] == '1')
                histogram[j]++;
                else
                histogram[j]=0;
            }
            maxi=max(maxi,maxArea(histogram));
        }
        return maxi;
    }
};
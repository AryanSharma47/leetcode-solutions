//Simple Approach using next and prev small element
class Solution {
private:
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

public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();

        vector<int> prev=prevSmallElement(heights,n);
        vector<int> next=nextSmallElement(heights,n);

        int area=INT_MIN;

        for(int i=0;i<n;i++)
        {
            int len=heights[i];

            if(next[i] == -1)
            next[i]=n;
            
            int bre=next[i]-prev[i]-1;

            area = max(area,len*bre);
        }
        return area;
    }
};
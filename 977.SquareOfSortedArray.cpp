//First Approach || TC : O(n)
class Solution {
public:
    vector<int> sortedSquares(vector<int>& num) 
    {
        int n=num.size(),s=0,e=n-1;
        vector<int> v(n);
       for(int i=n-1;i>=0;i--)
       {
        if(abs(num[s]) >= abs(num[e]))
        {
            v[i]=num[s]*num[s];
            s++;
        }
        else
        {
            v[i]=num[e]*num[e];
            e--;
        }
       }
       return v;
    }
};

//Second Approach || TC :O(nLogn)
class Solution {
public:
    vector<int> sortedSquares(vector<int>& num) 
    {
       for(int i=0;i<num.size();i++)
            num[i]*=num[i];

        sort(num.begin(),num.end());
        return num;
    }
};
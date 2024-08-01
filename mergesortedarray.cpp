class Solution {
public:
    void merge(vector<int>& num1, int m, vector<int>& num2, int n) {
         for(int i=m,j=0;j<num2.size();i++,j++)
            num1[i]=num2[j];
         
         sort(num1.begin(),num1.end());
    }
};
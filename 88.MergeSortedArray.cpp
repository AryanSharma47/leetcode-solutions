//First Approach
//TC : O((n+m)log(n+m))
class Solution {
public:
    void merge(vector<int>& num1, int m, vector<int>& num2, int n) {
         for(int i=m,j=0;j<num2.size();i++,j++)
            num1[i]=num2[j];
         
         sort(num1.begin(),num1.end());
    }
};

//Second Approach
//TC : O(n+m)
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1,j = n-1,k = m+n-1;

        while(i>=0 && j>=0)
        {
            if(nums1[i] < nums2[j])
            nums1[k--] = nums2[j--];
            else
            nums1[k--] = nums1[i--];
        }
        while(j>=0)
        nums1[k--] = nums2[j--];
    }
};
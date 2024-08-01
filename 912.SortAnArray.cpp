//Using Merge Sort
// Time Complexity: O(nlogn)
class Solution {
public:
    void merge(vector<int> &arr,int low,int mid,int high)
    {
        vector<int> ans(high-low+1);
        int i=low,j=mid+1,k=0;

        while(i<= mid && j<=high)
        {
            if(arr[i] <= arr[j])
            ans[k++] = arr[i++];
            else
            ans[k++] = arr[j++];
        }

        while(i <= mid)
        ans[k++] = arr[i++];

        while(j <= high)
        ans[k++] = arr[j++];

        for(i=low;i<=high;i++)
        arr[i] = ans[i-low];
    }
    void mergeSort(vector<int> &arr,int low,int high)
    {
        if(low >= high)
        return;

        int mid = (low+high)/2;

        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);

        merge(arr,low,mid,high);
    }

    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();

        mergeSort(nums,0,n-1);
        return nums;
    }
};
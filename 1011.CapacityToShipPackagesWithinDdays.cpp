//Binary Search
class Solution {
public:
    bool findDays(vector<int> arr,int cap,int days)
    {
        int load = 0,myDays = 1;
        for(int i=0;i<arr.size();i++)
        {
            if(load+arr[i] > cap)
            {
                myDays++;
                load = arr[i];   //make curr weight to next day
            }
            else
            load += arr[i];
        }
        return myDays <= days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        int high = accumulate(weights.begin(),weights.end(),0);

        while(low <= high)
        {
            int mid = (low+high)/2;

            if(findDays(weights,mid,days))
            high = mid-1;
            else
            low = mid+1;
        }
        return low;
    }
};
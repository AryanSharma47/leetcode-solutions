//Simple Binary Search Solution
class Solution {
public:
    long calcHours(vector<int> arr,int hourly)
    {
        long totalHours = 0;
        for(int i=0;i<arr.size();i++)
        {
            totalHours += ceil((double)arr[i]/(double)hourly);
        }
        return totalHours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        long maxi = *max_element(piles.begin(),piles.end());
        
        long low = 1,high = maxi;
        while(low <= high)
        {
            long mid = (low+high)/2;
            long totalHours = calcHours(piles,mid);

            if(totalHours <= h)
            high = mid-1;
            else
            low = mid+1;
        }
        return low;
    }
};
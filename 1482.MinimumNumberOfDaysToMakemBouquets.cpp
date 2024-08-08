//First Approach
//Brute Force
class Solution {
public:
    bool possible(vector<int> arr,int day,int m,int k)
    {
        int noOfB = 0,cnt = 0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i] <= day)
            cnt++;
            else
            {
                noOfB += (cnt/k);
                cnt = 0;
            }
        }
        noOfB += (cnt/k);
        return noOfB >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int mini = *min_element(bloomDay.begin(),bloomDay.end());
        int maxi = *max_element(bloomDay.begin(),bloomDay.end());

        for(int i=mini;i<=maxi;i++)
        {
            if(possible(bloomDay,i,m,k))
            return i;
        }
        return -1;
    }
};




//Second Approach
//Binary Search
class Solution {
public:
    bool possible(vector<int> arr,long day,int m,int k)
    {
        long noOfB = 0,cnt = 0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i] <= day)
            cnt++;
            else
            {
                noOfB += (cnt/k);
                cnt = 0;
            }
        }
        noOfB += (cnt/k);
        return (int)noOfB >= m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long low = *min_element(bloomDay.begin(),bloomDay.end());
        long high = *max_element(bloomDay.begin(),bloomDay.end());

        long val = (long)m*(long)k;

        if(val > bloomDay.size())
        return -1;

        while(low <= high)
        {
            long mid = (low+high)/2;

            if(possible(bloomDay,mid,m,k))
            high = mid-1;
            else
            low = mid+1;
        }
        return low;
    }
};
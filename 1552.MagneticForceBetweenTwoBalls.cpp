//Binary Search
class Solution {
public:
    bool isPossible(vector<int>arr,int dist,int balls)
    {
        int myBalls = 1,last = arr[0];
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]-last >= dist)
            {
                myBalls++;
                last = arr[i];
            }
        }
        return myBalls >= balls;
    }

    int maxDistance(vector<int>& pos, int m) {
        sort(pos.begin(),pos.end());
        int n = pos.size();
        int low = 1,high = pos[n-1]-pos[0];

        while(low <= high)
        {
            long mid = (low+high)/2;

            if(isPossible(pos,mid,m))
            low = mid+1;
            else
            high = mid-1;
        }
        return high;
    }
};
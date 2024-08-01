//Binary Search
class Solution {
public:
    bool isValid(vector<int> position,int mid,int m)
    {
        int balls = 1;
        int lastPos = position[0];
        for(int i=1;i<position.size();i++)
        {
            if(position[i]-lastPos >= mid)
            {
                balls++;
                lastPos = position[i];
            }
        }
        return balls >= m;
    }
    int maxDistance(vector<int>& position, int m) {
        int low = 0;
        int high = *max_element(position.begin(),position.end());
        int ans = -1;
        sort(position.begin(),position.end());

        while(low <= high)
        {
            int mid = low+(high-low)/2;
            if(isValid(position,mid,m))
            {
                ans = mid;
                low = mid+1;
            }
            else
            {
                high = mid-1;
            }
        }
        return ans;
    }
};
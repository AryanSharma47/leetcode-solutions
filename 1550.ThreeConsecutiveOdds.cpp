//Simple Sliding Window Approach
class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int count = 0;
        for(int i=0;i<3 && i<arr.size();i++)
        count += arr[i]%2;

        if(count == 3)
        return true;

        for(int i=3;i<arr.size();i++)
        {
            count = count + arr[i]%2 - arr[i-3]%2;
            if(count == 3)
            return true;
        }
        return false;
    }
};
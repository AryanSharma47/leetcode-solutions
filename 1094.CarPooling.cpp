//Simple Approach
class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> timestamps(1000,0);

        for(const auto& trip : trips)
        {
            int psg=trip[0];
            int start=trip[1];
            int end=trip[2];
            
            for(int i=start;i<end;i++)
            {
                timestamps[i] += psg;
                if(timestamps[i] > capacity)
                return false;
            }
        }
        return true;
    }
};
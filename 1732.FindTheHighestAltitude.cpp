//Simple Approach
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        for(int i=1;i<gain.size();i++)
        gain[i] += gain[i-1];
        
        int alt = *max_element(gain.begin(),gain.end());
        return  alt > 0 ? alt : 0; 
    }
};
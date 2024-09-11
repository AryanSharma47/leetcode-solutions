//Brute Force
class Solution {
public:
    int minBitFlips(int start, int goal) {
        string binStart = bitset<32>(start).to_string();
        string binGoal = bitset<32>(goal).to_string();
        int cnt = 0;
        
        for (int i = 0; i < 32; i++) 
        {
            if (binStart[i] != binGoal[i]) 
            cnt++;
            
        }
        
        return cnt;
    }
};


//Optimal Approach 
//TC : O(logn)
class Solution {
public:
    int minBitFlips(int start, int goal) {
        int cnt = 0;
        int ans = start^goal;

        while(ans != 0)
        {
            if(ans & 1 != 0)
            cnt++;

            ans >>= 1;
        }
        return cnt;
    }
};
//Easiest Solution || Greedy Solution
class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int size=tasks.size();

        if(n==0)
        return size;

        vector<int> intervals(26,0);
        int maxFreq=0,sameMaxFreq=0;

        for(auto i : tasks)
        intervals[i-'A']++;

        for(int i=0;i<26;i++)
        {
            if(intervals[i] > maxFreq)
            {
                maxFreq=intervals[i];
                sameMaxFreq=1;
            }
            else if(intervals[i] == maxFreq)
            {
                sameMaxFreq++;
            }
        }
        int ans=(n+1)*(maxFreq-1)+(sameMaxFreq);
        ans=max(size,ans);
        return ans;
    }
};
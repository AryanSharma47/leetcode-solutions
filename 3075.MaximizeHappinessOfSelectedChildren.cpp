//Simple Greedy Approach
class Solution {
public:
    long long maximumHappinessSum(vector<int>& hpp, int k) {
        sort(hpp.begin(),hpp.end(),greater<int>());
        long long hpp_sum = 0;
        int i=0;

        while(k--)
        {
            hpp[i] = max(hpp[i]-i,0);
            hpp_sum += hpp[i++];
        }
        return hpp_sum;
    }
};
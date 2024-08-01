//Simple Solution
class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& cust) {
        int n = cust.size(),time = cust[0][0];
        double sum = 0;

        for(int i=0;i<n;i++)
        {
            if(time < cust[i][0])
            time = cust[i][0];
           
            time = time+cust[i][1];

            sum += (time-cust[i][0]);
        }
        return sum/n;
    }
};
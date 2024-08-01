//Simple Approach
class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<long long> con(n,0);
        long long cost = 1;

        for(auto road : roads)
        {
            con[road[0]]++;
            con[road[1]]++;
        }

        sort(con.begin(),con.end());
        long long imp = 0;

        for(auto i : con)
        imp += i*cost++;

        return imp;
    }
};
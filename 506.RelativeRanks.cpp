//Simple Approach Using Priority Queue
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<string> ranks(n);
        priority_queue<pair<int,int>> pq;

        for(int i=0;i<n;i++)
        pq.push({score[i],i});

        int place = 1;
        while(!pq.empty())
        {
            int ind = pq.top().second;
            pq.pop();

            if(place == 1)
            ranks[ind] = "Gold Medal";
            else if(place == 2)
            ranks[ind] = "Silver Medal";
            else if(place == 3)
            ranks[ind] = "Bronze Medal";
            else
            ranks[ind] = to_string(place);

            place++;
        }
        return ranks;
    }
};
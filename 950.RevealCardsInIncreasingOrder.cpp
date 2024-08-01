//Simple Approach using queue
class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        queue<int> q;
        sort(deck.begin(),deck.end());

        for(int i=deck.size()-1;i>=0;i--)
        {
            if(!q.empty())
            {
                q.push(q.front());
                q.pop();
            }
            q.push(deck[i]);
        }

        for(int i=deck.size()-1;i>=0;i--)
        {
            deck[i]=q.front();
            q.pop();
        }
        return deck;
    }
};
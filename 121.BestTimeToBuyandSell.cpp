//Easy Approach || Time Complexity : O(n)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
            int minPrice=prices[0];
            int maxProf=0;
            for(int i=0;i<prices.size();i++)
            {
               maxProf=max(maxProf,prices[i]-minPrice);
               minPrice=min(minPrice,prices[i]);
            }
            return maxProf;
    }
};
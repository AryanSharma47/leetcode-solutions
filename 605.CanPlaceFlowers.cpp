//Simple Approach
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n == 0)
        return true;

        for(int i=0;i<flowerbed.size();i++)
        {
            if(flowerbed[i] == 0)
            {
                bool prev = (i==0) || (flowerbed[i-1] == 0);
                bool next = (i==flowerbed.size()-1) || (flowerbed[i+1] == 0);

            if(prev && next)
            {
                flowerbed[i] = 1;
                n--;
            }
            if(n == 0)
            return true;
            }
            
        }
        return n == 0;
    }
};
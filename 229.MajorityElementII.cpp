//Boyer Moore Voting Algorithm
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int c1=0,c2=0,ele1=INT_MIN,ele2=INT_MIN;
        int n = nums.size();

        for(auto i : nums)
        {
            if(c1 == 0 && i != ele2)
            {
                c1 = 1;
                ele1 = i;
            }
            else if(c2 == 0 && i != ele1)
            {
                c2 = 1;
                ele2 = i;
            }
            else if(i == ele1)
            {
                c1++;
            }
            else if(i == ele2)
            {
                c2++;
            }
            else
            {
                c1--;c2--;
            }
        }

        c1=0,c2=0;

        for(auto i :nums)
        {
            if(i == ele1) 
            c1++;
            if(i == ele2)
            c2++;
        }
        if(c1 > (n/3))
        ans.push_back(ele1);
        if(c2 > (n/3))
        ans.push_back(ele2);

        return ans;
    }
};
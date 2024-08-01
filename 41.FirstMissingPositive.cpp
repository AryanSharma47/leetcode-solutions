//Easiest Approach || Using swap
class Solution {
public:
    void rightPlace(vector<int> &v)
    {
        for(int i=0;i<v.size();i++)
        {
            while(v[i] > 0 && v[i] <= v.size() && v[v[i]-1] != v[i])
            swap(v[i] , v[v[i]-1]);
        }
    }
 
    int firstMissingPositive(vector<int>& nums) {
        rightPlace(nums);

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] != i+1)
            return i+1;
        }
        return nums.size()+1;
    }
};
//Two Pointers Approach
//Simple Approach
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int len = 0;
        int left = 0,right = 0,n = nums.size();

        while(right < n)
        {
            if(nums[right] == 1)
            {
                len = max(len,right-left+1);
                right++;
            }
            else
            {
                left = right;
                left++;right++;
            }
        }
        return len;
    }
};


//Second Approach
//Simplest One
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int len = 0,c = 0;
        for(auto  i : nums)
        {
            if(i == 1)
            {
                c++;
                len = max(len,c);
            }
            else
            c = 0;
        }
        return len;
    }
};
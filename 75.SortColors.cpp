//Optimal Approach
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = 0,mid = 0,high = n-1;

        while(mid <= high)
        {
            if(nums[mid] == 0)
            {
                swap(nums[mid],nums[low]);
                low++;mid++;
            }
            else if(nums[mid] == 2)
            {
                swap(nums[mid],nums[high]);
                high--;
            }
            else
            {
                mid++;
            }
        }
    }
};

//Second Optimal Approach
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeros = 0, ones = 0, n = nums.size();
        for(int num : nums) {
            if(num == 0) zeros++;
            else if(num == 1) ones++;
        }  

        for(int i = 0; i < zeros; ++i) 
            nums[i] = 0;
        

        for(int i = zeros; i < zeros + ones; ++i) 
            nums[i] = 1;
        

        for(int i = zeros + ones; i < n; ++i) 
            nums[i] = 2;
        
    }
};
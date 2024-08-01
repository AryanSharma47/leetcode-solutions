//Simple Approach
class Solution {
public:
    TreeNode *helper(vector<int> nums,int left,int right)
    {
        if(left > right)
        return NULL;

        int mid=left+(right-left)/2;
        TreeNode *root=new TreeNode(nums[mid]);
        root->left=helper(nums,left,mid-1);
        root->right=helper(nums,mid+1,right);

        return root;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return helper(nums,0,nums.size()-1);
    }
};
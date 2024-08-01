//Simple Recursive Approach
class Solution {
public:
    TreeNode* removeLeafNodes(TreeNode* root, int target) {

        if(root->left) 
        root->left = removeLeafNodes(root->left,target);
        if(root->right)
        root->right = removeLeafNodes(root->right,target);

        if(root->val == target && !root->left && !root->right)
        return NULL;

        return root;
    }
};
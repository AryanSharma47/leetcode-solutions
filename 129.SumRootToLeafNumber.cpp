//Simple Approach
class Solution {
public:
    int sum(TreeNode* root,int num)
    {
        if(root == NULL)
        return 0;

        num = num*10 + root->val;

        if(root->left ==NULL && root->right ==NULL)
        return num;
        
        return sum(root->left,num) + sum(root->right,num);
    }

    int sumNumbers(TreeNode* root) {
        return sum(root,0);
    }
};
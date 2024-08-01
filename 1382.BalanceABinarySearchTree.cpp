//Simple Approach
class Solution {
public:
    void inorder(TreeNode *root,vector<int> &v)
    {
        if(!root)
        return;

        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }

    TreeNode *builtTree(vector<int> v,int low,int high)
    {
        if(low > high)
        return NULL;

        int mid = low+(high-low)/2;
        TreeNode *node = new TreeNode(v[mid]);
        node->left = builtTree(v,low,mid-1);
        node->right = builtTree(v,mid+1,high);
        return node;  
    }

    TreeNode* balanceBST(TreeNode* root) {
        vector<int> v;
        inorder(root,v);
        return builtTree(v,0,v.size()-1);
    }
};
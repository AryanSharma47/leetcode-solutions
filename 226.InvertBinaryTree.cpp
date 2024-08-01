//Simple Approach
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL)
        return root;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty())
        {
            int size = q.size();
            for(int i=0;i<size;i++)
            {
                TreeNode *front = q.front();
                q.pop();

                swap(front->left,front->right);

                if(front->left)
                q.push(front->left);
                if(front->right)
                q.push(front->right);
            }
        }
        return root;
    }
};
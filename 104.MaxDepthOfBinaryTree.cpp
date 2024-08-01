//First Approach using Level Order Traversal
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL)
        return 0;

        int dep=0;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty())
        {
            dep++;
            int s=q.size();
            for(int i=0;i<s;i++)
            {
            TreeNode *t=q.front();
            q.pop();

            if(t->left)
            q.push(t->left);
            if(t->right)
            q.push(t->right);
            }

        }
        return dep;
    }
};

//Second Approach Using Recursion
class Solution {
public:
    int maxDepth(TreeNode* root) {
      if(root==NULL)
      return 0;

      int left=maxDepth(root->left);
      int right=maxDepth(root->right);

      return max(left,right)+1;  
    }
};
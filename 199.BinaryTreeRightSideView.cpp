//Simple Level Order Approach
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        queue<TreeNode*>q;
        if(root == NULL) 
        return ans;
        q.push(root);
        
        while(!q.empty())
        {
            int s = q.size();

            for(int i=0;i<s;i++)
            {
                TreeNode *front = q.front();
                q.pop();

                if(front->left)
                q.push(front->left);
                if(front->right)
                q.push(front->right);

                if(i == s-1)
                ans.push_back(front->val);
            }
        }
        return ans;
    }
};
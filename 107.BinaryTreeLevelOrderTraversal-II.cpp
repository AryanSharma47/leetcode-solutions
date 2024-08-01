//Easiest Approach
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> v;
        if(root==NULL)
        return v;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty())
        {
            vector<int> ans;
            int s=q.size();
            for(int i=0;i<s;i++)
            {
                TreeNode *temp=q.front();
                q.pop();

                ans.push_back(temp->val);

                if(temp->left)
                q.push(temp->left);
                if(temp->right)
                q.push(temp->right);
            }
            v.push_back(ans);
        }
        reverse(v.begin(),v.end());
        return v;
    }
};
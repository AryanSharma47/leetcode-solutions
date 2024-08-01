//Simplest Approach
class Solution {
public:

    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> v;
        if(root==NULL)
        return v;

        queue<TreeNode*> q;
        q.push(root);
        bool zz=true;

        while(!q.empty())
        {
            vector<int> ans;
            int size=q.size();
            for(int i=0;i<size;i++)
            {
                TreeNode *temp=q.front();
                q.pop();
                ans.push_back(temp->val);

                if(temp->left)
                q.push(temp->left);

                if(temp->right)
                q.push(temp->right);       
            }

            if(zz)
            {
                v.push_back(ans);
                zz=!zz;
            }
            else
            {
                reverse(ans.begin(),ans.end());
                v.push_back(ans);
                zz=!zz;
            }

        }
        return v;
    }
};
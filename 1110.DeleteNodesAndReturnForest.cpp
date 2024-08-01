//Simple Approach
class Solution {
public:
    set<int> st;
    void deleteNode(TreeNode *&root,vector<TreeNode*> &ans)
    {
        if(!root)
        return;

        deleteNode(root->left,ans);
        deleteNode(root->right,ans);
        
            if(st.find(root->val) != st.end())
            {
                if(root->left) 
                ans.push_back(root->left);
                if(root->right) 
                ans.push_back(root->right);
                root = NULL;
            }
    }
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        vector<TreeNode*> ans;

        for(auto i : to_delete)
        st.insert(i);

        deleteNode(root,ans);

        if(root)
        ans.push_back(root);

        return ans;
    }
};
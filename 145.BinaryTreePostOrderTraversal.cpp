//Iterative Approach
//TC : O(n) || SC : O(n)
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(!root)   return ans;
        
        stack<TreeNode*> st;
        st.push(root);

        while(!st.empty())
        {
            TreeNode *node = st.top();
            st.pop();

            ans.insert(ans.begin(),node->val);

            if(node->left)   st.push(node->left);
            if(node->right)  st.push(node->right);
        }
        return ans;
    }
};


//Recursive Appproach
//TC : O(n) || SC : O(n) (O(n) for call stack)
class Solution {
public:
    void postOrder(TreeNode* root,vector<int> &ans)
    {
        if(!root)   return;

        postOrder(root->left,ans);
        postOrder(root->right,ans);
        ans.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(!root)   return ans;

        postOrder(root,ans);
        return ans;
    }
};
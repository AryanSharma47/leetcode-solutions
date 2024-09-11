//Iterative Approach
//TC : O(n) || SC : O(n)

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> ans;
        if(!root)   return ans;

        stack<Node*> st;
        st.push(root);

        while(!st.empty())
        {
            Node *node = st.top();
            st.pop();

            ans.push_back(node->val); 
            //ans.insert(ans.begin(),node->val);

            for(auto child : node->children)
            {
                if(child)
                st.push(child);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

//Recursive 
//DFS
class Solution {
public:
    void dfs(Node *root,vector<int> &ans)
    {
        if(!root)   return;

        for(auto child : root->children)
        dfs(child,ans);

        ans.push_back(root->val);
    }

    vector<int> postorder(Node* root) {
        vector<int> ans;
        if(!root)   return ans;

        dfs(root,ans);
        return ans;
    }
};
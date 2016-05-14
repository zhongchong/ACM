/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode *> tree_stack;
        vector<int> res;
        while(root || !tree_stack.empty() )
        {
            while(root)
            {
                tree_stack.push(root);
                res.insert(res.begin(),root->val);
                root = root->right;
            }
            root = tree_stack.top();
            tree_stack.pop();
            root = root->left;
        }
        return res;
    }
};
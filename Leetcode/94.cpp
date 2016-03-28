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
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> tree_stack;
        vector<int> res;
        TreeNode* curr = root;
        while( curr != nullptr)
        {
            tree_stack.push(curr);
            curr = curr->left;
        }
        while( !tree_stack.empty() )
        {
            curr = tree_stack.top();
            tree_stack.pop();
            res.push_back(curr->val);
            if( curr->right != nullptr)
            {
                curr = curr->right;
                while( curr != nullptr)
                {
                    tree_stack.push(curr);
                    curr = curr->left;
                }
            }
        }
        return res;
    }
};

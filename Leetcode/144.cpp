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
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*> tree_stack;
        vector<int> res;
        if(root!=nullptr)
            tree_stack.push(root);
        while( !tree_stack.empty() )
        {
            TreeNode* i = tree_stack.top();
            tree_stack.pop();
            res.push_back( i->val );
            if( i->right != nullptr)
                tree_stack.push(i->right);
            if( i->left != nullptr)
                tree_stack.push(i->left);
        }
        return res;
    }
};
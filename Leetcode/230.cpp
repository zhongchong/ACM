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
    int kthSmallest(TreeNode* root, int k) {
        assert(root != nullptr && k>=0);
        TreeNode *p = root;
        stack<TreeNode*> tree_stack;
        while( p !=nullptr )
        {
            tree_stack.push(p);
            p=p->left;
        }
        while( !tree_stack.empty() )
        {
            p = tree_stack.top();
            tree_stack.pop();
            if( k == 1)
                return p->val;
            else
                --k;
            p=p->right;
            while(p != nullptr)
            {
                tree_stack.push(p);
                p = p->left;
            }
        }
        return -1;
    }
};
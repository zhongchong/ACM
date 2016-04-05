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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        assert(root!=nullptr && p!=nullptr && q!=nullptr);
        TreeNode *curr = root;
        while( curr != nullptr && curr->val != p->val && curr->val != q->val)
        {
            if( p->val > curr->val && q->val > curr->val)
                curr= curr->right;
            else if( p->val < curr->val && q->val < curr->val )
                curr = curr->left;
            else
                break;
        }
        return curr;
    }
};
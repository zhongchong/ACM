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
    int myrob(TreeNode* root, int &l, int &r)
    {
        if(root == nullptr)
        {
            l = r = 0;
            return 0;
        }
        int ll, lr, rl, rr;
        l = r = ll = lr =0;
        l = myrob(root->left, ll, lr);
        r = myrob(root->right, rl, rr);
        return max(root->val + ll + lr + rr+ rl, l+r);
    }
    int rob(TreeNode* root) {
        int r,l;
        return myrob(root,r,l);
    }
};
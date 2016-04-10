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
    void binary_create(vector<int>& nums, int left, int right, TreeNode* root, int tag)
    {
        assert(root!=nullptr);
        if(left > right)
        {
            if(tag)
                root->right=nullptr;
            else
                root->left=nullptr;
        }
        else
        {
            int mid = left + (right - left)/2;
            TreeNode *node = new TreeNode(nums.at(mid));
            if(tag)
                root->right=node;
            else
                root->left=node;
            binary_create(nums,left,mid-1,node,0);
            binary_create(nums,mid+1,right,node,1);
        }
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size() <=0)
            return nullptr;
        int mid = (nums.size()-1) / 2;  
        TreeNode *root = new TreeNode( nums.at(mid) );
        binary_create(nums, 0, mid-1, root, 0);
        binary_create(nums, mid+1, nums.size()-1, root, 1);
        return root;
    }
};
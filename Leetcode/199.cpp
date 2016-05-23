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
    vector<int> rightSideView(TreeNode* root) {
        TreeNode *p = root;
        vector<int> res;
        if(p==nullptr)
            return res;
        queue<TreeNode*> que1, que2;
        que1.push(p);
        while( !(que1.empty() && que2.empty()) )
        {
            queue<TreeNode*> *first, *second;
            if( que1.empty() )
            {
                first=&que2;
                second=&que1;
            }
            else
            {
                first=&que1;
                second=&que2;
            }
            TreeNode* tmp;
            while( !first->empty() )
            {
                tmp=first->front();
                first->pop();
                if( tmp->left != nullptr)
                    second->push(tmp->left);
                if( tmp->right != nullptr )
                    second->push(tmp->right);
            }
            res.push_back(tmp->val);
        }
        return res;
    }
};
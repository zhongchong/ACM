/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        if( root == nullptr )
            return;
        queue<TreeLinkNode*> tree_queue;
        int last_node=1, curr_node=1, floor=1;
        tree_queue.push(root);
        while( !tree_queue.empty() )
        {
            TreeLinkNode* tmp=tree_queue.front();
            tree_queue.pop();
            if( curr_node == last_node)
            {
                tmp->next=nullptr;
                floor *= 2;
                last_node += floor;
            }
            else
                tmp->next = tree_queue.front();
            ++curr_node;
            if(tmp->left!=nullptr)
                tree_queue.push(tmp->left);
            if(tmp->right!=nullptr)
                tree_queue.push(tmp->right);
        }
        return;
    }
};
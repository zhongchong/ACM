/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* root=nullptr;
        ListNode* p=nullptr;
        while(l1!=nullptr || l2!=nullptr)
        {
            ListNode** tmp=nullptr;
            if(l1!=nullptr && l2!=nullptr)
            {
                if(l1->val < l2->val)
                    tmp=&l1;
                else
                    tmp=&l2;
            }
            else if(l1==nullptr && l2!=nullptr)
                tmp=&l2;
            else if(l1!=nullptr && l2==nullptr)
                tmp=&l1;
            if(p == nullptr)
            {
                p=*tmp;
                root=p;
                *tmp=(*tmp)->next;
                p->next=nullptr;
            }
            else
            {
                p->next=*tmp;
                p=p->next;
                *tmp=(*tmp)->next;
                p->next=nullptr;
            }
        }
        return root;
    }
};
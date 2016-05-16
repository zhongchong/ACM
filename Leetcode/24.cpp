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
    ListNode* swapPairs(ListNode* head) {
        ListNode *first=head,*second, *pre=nullptr;
        ListNode *root;
        if(head==nullptr)
            return head;
        else
        {
            if(head->next == nullptr)
                return head;
            else
                root=head->next;
        }
        while(first!=nullptr && first->next!=nullptr)
        {
            second=first->next;
            first->next=second->next;
            second->next=first;
            if(pre!=nullptr)
                pre->next=second;
            pre=first;
            first=first->next;
        }
        return root;
    }
};
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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *cur = head, *pre = nullptr;
        while(cur!=nullptr)
        {
            if(pre!=nullptr && cur->val == pre->val)
            {
                pre->next = cur->next;
                delete cur;
                cur = pre->next;
            }
            else
            {
                pre = cur;
                cur = cur->next;
            }
        }
        return head;
    }
};
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
    ListNode* oddEvenList(ListNode* head) {
        if(head == nullptr)
            return head;
        ListNode* odd=head, *even_head=head->next, *even_back=head->next;
        while( odd != nullptr)
        {
            if(odd->next == nullptr)
                break;
            else
            {
                ListNode *tmp = odd->next->next;
                even_back->next = odd->next;
                even_back=even_back->next;
                even_back->next=nullptr;
                odd->next = tmp;
                odd = odd->next;
            }
        }
        odd = head;
        while( odd->next != nullptr)
            odd = odd->next;
        odd->next = even_head;
        return head;
    }
};
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *front=nullptr, *rear = nullptr;
        int a=0,b=0,up=0;
        front = new ListNode(-1);
        rear = front;
        while(l1 != nullptr || l2 != nullptr)
        {
            a = b = 0;
            if(l1 != nullptr)
            {
                a = l1->val;
                l1 = l1->next;
            }
            if(l2 != nullptr)
            {
                b = l2->val;
                l2 = l2->next;
            }
            a = a + b + up;
            up = a / 10;
            a %= 10;
            ListNode *node = new ListNode(a);
            rear->next = node;
            rear = rear->next;
        }
        if(up != 0)
        {
            ListNode *node = new ListNode(up);
            rear->next = node;
            rear = rear->next;
        }
        rear = front;
        front = front->next;
        delete rear;
        return front;
    }
};


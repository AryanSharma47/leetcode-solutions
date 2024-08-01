//Simple Approach

class Solution {
public:
    ListNode *reverse(ListNode *head)
    {
        ListNode *prev = NULL;
        while(head)
        {
            ListNode *fwd = head->next;
            head->next = prev;
            prev = head;
            head = fwd;
        }
        return prev;
    }
    ListNode* removeNodes(ListNode* head) {
        head = reverse(head);
        ListNode *temp = head;

        while(temp->next)
        {
            if(temp->next->val < temp->val)
            temp->next = temp->next->next;
            else
            temp = temp->next;
        }
        return reverse(head);
    }
};
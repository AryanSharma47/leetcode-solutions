//Simple Logic
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        if(head == NULL)
        return head;

        ListNode *temp = head->next;
        ListNode *dummy = new ListNode(0);
        ListNode *curr = dummy;
        while(temp)
        {
            int sum = 0;
            while(temp->val)
            {
                sum += temp->val;
                temp = temp->next;
            }
            curr->next = new ListNode(sum);
            curr = curr->next;
            temp = temp->next;
        }
        return dummy->next;
    }
};
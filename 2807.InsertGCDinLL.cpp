//Simple Approach
class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head == NULL || head->next == NULL)
        return head;
        
        ListNode *temp=head;
        while(temp->next != NULL)
        {
            int a = temp->val;
            int b=temp->next->val;
            a = __gcd(a,b);
            ListNode *nn = new ListNode(a);    
            nn->next = temp->next;
            temp->next = nn;

            temp=temp->next->next;
        }
        return head;
    }
};
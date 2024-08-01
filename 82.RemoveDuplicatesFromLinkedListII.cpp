//Easiest Approach || Beats 100% Users

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL)
        return head;

        ListNode *curr=head;
        ListNode *dummy=new ListNode(0);
        dummy->next=head;
        ListNode *prev=dummy;

        while(curr!=NULL && curr->next!=NULL)
        {
            if(curr->val==curr->next->val)
            {
                int dup=curr->val;
                while(curr!=NULL && curr->val == dup)
                {
                    ListNode *temp=curr;
                    curr=curr->next;
                    delete temp;
                }
                prev->next=curr;
            }
            else
            {
            prev=curr;
            curr=curr->next;
            }
        }
        head=dummy->next;
        delete dummy;
        return head;
    }
};
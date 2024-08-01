//Easiest Approach || Beats 100% users || Best Solution
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getLength(ListNode*head)
   {
    ListNode *temp=head;
    int len=0;
    while(temp!=NULL)
    {
        len++;
        temp=temp->next;
    }
    return len;
    }
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len=getLength(head);
        int last=len-n+1;
        int c=1;
        ListNode* prev=NULL;
        ListNode*curr= head;
        while(curr!=NULL && c<last)
        {
           prev=curr;
           curr=curr->next;
           c++;
        }
        if(prev==NULL)
        {
            head=head->next;
            return head;
        }
        prev->next=curr->next;
        return head;
    }
};
//Simple Solution || Beats 85% Users || Simple Logic
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
    ListNode *reverse(ListNode *head)
    {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode *curr=head;
        ListNode *prev=NULL;
        while(curr!=NULL)
        {
            ListNode *fwd=curr->next;
            curr->next=prev;
            prev=curr;
            curr=fwd;
        }
        return prev;
    }
    
    ListNode* doubleIt(ListNode* head) {
        ListNode *curr=reverse(head);
        ListNode *temp=curr;
        int c=0;
        while(temp!=NULL)
        {
           int v=0;
           v= (temp->val*2)+c;
           temp->val=(v%10);
           c=v/10;
           temp=temp->next;
        }

         if(c>0)
         {
             ListNode *newNode=new ListNode(c);
             temp=curr;
             while(temp->next!=NULL)
               temp=temp->next;

             temp->next=newNode;
         }
        return reverse(curr);
    }
};
//Simple Approach
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
    ListNode* partition(ListNode* head, int x) {
      ListNode *d1=new ListNode();
      ListNode *temp1=d1;
      ListNode *d2=new ListNode();
      ListNode *temp2=d2;

      while(head)
      {
        if(head->val < x)
        {
            temp1->next=head;
            temp1=temp1->next;
        }
        else
        {
            temp2->next=head;
            temp2=temp2->next;
        }
        head=head->next;
      }
      if(d1->next==NULL)
      return d2->next;

      temp1->next=d2->next;
      temp2->next=NULL;
      return d1->next;
    }
};
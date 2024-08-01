//First Approach || Iterative Approach
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *prev=NULL;
        ListNode *curr=head;
        while(curr!=NULL)
        {
            ListNode *fwd=curr->next;
            curr->next=prev;
            prev=curr;
            curr=fwd;
        }
        return prev;
    }
};


//Second Approach || Using Stack
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        stack<ListNode*> s;
        ListNode *curr=head;

        while(curr!=NULL)
        {
            s.push(curr);
            curr=curr->next;
        }

        ListNode *newHead=new ListNode(0);
        ListNode *dummy=newHead;

        while(!s.empty())
        {
            dummy->next=s.top();
            dummy=dummy->next;
            s.pop();
        }
        
        dummy->next=NULL;
        return newHead->next;
    }
};
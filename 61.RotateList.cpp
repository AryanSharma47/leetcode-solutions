//First Approach || Optimal Approach

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || k==0)
        return head;

        ListNode* temp=head;
        int len=1;
        while(temp->next)
        {
            len++;
            temp=temp->next;
        }
        temp->next=head;

        int cut=len-(k%len);  //For Finding Specific Position
        ListNode *prev=NULL;
        ListNode *curr=head;
        while(cut)
        {
            prev=curr;
            curr=curr->next;
            cut--;
        }
        prev->next=NULL;
        head=curr;
        return head;
    }
};



//Second Approach || Can Show TLE in big Test Cases

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL)
        return head;
        while(k--)
        {
        ListNode *prev=NULL;
        ListNode *temp=head;
        while(temp->next!=NULL)
        {
            prev=temp;
            temp=temp->next;
        }
        prev->next=NULL;
        temp->next=head;
        head=temp;
        }
        return head;
    }
};
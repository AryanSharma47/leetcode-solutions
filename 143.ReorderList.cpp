//Simplest Approach || Using Two Pointers
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

    void reorderList(ListNode* head) {
        if(head==NULL || head->next==NULL)
        return;

        ListNode* slow = head;
        ListNode* fast = head;
       while (fast->next != NULL && fast->next->next != NULL) 
        {
           slow = slow->next;
           fast = fast->next->next;
        }
       
       ListNode *fwd=head;
       ListNode *rev=reverse(slow->next);  
       slow->next=NULL;
       ListNode *ans=new ListNode(0);
       ListNode *res=ans;

       while(fwd!=NULL && rev!=NULL)
       {
           res->next=fwd;
           fwd=fwd->next;
           res=res->next;

           res->next=rev;
           rev=rev->next;
           res=res->next;
       } 

       if(fwd!=NULL)
           res->next=fwd;
      
       head=ans->next;
    }
};

//Second Approach Using Stack

class Solution {
public:
    void reorderList(ListNode* head) {
        if(!head || !head->next)
        return;

       ListNode *temp=head;
       stack<ListNode*> st;

       while(temp)
       {
        st.push(temp);
        temp=temp->next;
       } 

       temp=head;
       int mid=(st.size()+1)/2;
       
       while(mid--)
       {
        ListNode *next=temp->next;
        ListNode *last=st.top();
        st.pop();
        
        if(temp!=last)
        {
            temp->next=last;
            last->next=next;
            temp=next;
        }
        else
        {
            temp->next=NULL;
            break;
        }
        if(mid==0)
        last->next=NULL;
       }
    }
};
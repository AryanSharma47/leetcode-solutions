//Simple Approach || Time Complexity : O(m+n) || Space Complexity : O(1)
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *temp1=headA;
        ListNode *temp2=headB;
        while(temp1!=temp2)
        {
            if(temp1==NULL)
            temp1=headA;
            else
            temp1=temp1->next;

            if(temp2==NULL)
            temp2=headB;
            else
            temp2=temp2->next;
        }
        return temp1;
    }
};

//Second Approach || Time Complexity : O(m*n)
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        while(headA!=NULL)
        {
            ListNode *temp=headB;
            while(temp!=NULL)
            {
                if(temp==headA)
                return temp;
                temp=temp->next;
            }
            headA=headA->next;
        }
        return NULL;
    }
};
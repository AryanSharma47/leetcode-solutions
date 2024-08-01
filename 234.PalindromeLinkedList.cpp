//Simple Approach using Stack
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
    bool isPalindrome(ListNode* head) 
    {
        ListNode *temp=head;
        stack<int> s;
        while(temp!=NULL)
        {
            s.push(temp->val);
            temp=temp->next;
        }
        temp=head;
        while(!s.empty())
        {
            if(s.top()!=temp->val)
            return false;

            temp=temp->next;
            s.pop();
        }
        return true;
    }
};
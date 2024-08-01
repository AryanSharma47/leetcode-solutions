//Easiest Approach || Beats 100% Users

class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        if(!head)
        return NULL;

       vector<int> v;
       ListNode *temp=head;
       while(temp!=NULL)
       {
        v.push_back(temp->val);
        temp=temp->next;
       }
        
       for(int i=0;i<v.size();i++)
       {
        int sum=0;
        for(int j=i;j<v.size();j++)
        {
            sum+=v[j];

            if(sum==0)
            {
            v.erase(v.begin()+i,v.begin()+j+1);
            i--;
            break;
            }
        }
       }

       ListNode *ans=new ListNode(0);
       ListNode *res=ans;

       for(int i=0;i<v.size();i++)
       {
        ListNode *newNode=new ListNode(v[i]);
        res->next=newNode;
        res=res->next;
       }
       return ans->next;
    }
};
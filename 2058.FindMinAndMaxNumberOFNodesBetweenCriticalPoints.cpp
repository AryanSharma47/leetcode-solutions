//Simple Logic
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> res;

        if(!head || !head->next)
        return {-1,-1};

        ListNode *curr = head->next,*prev = head;
        int pos = 2; 

        while(curr->next)
        {
            int currVal = curr->val, prevVal = prev->val, nextVal = curr->next->val;
            
            if(currVal < prevVal && currVal < nextVal || currVal > prevVal && currVal > nextVal)
            res.push_back(pos);

            pos++;
            prev = curr;
            curr = curr->next;
        }

        if(res.size() < 2)
        return  {-1,-1};
        else
        {
           int mini = INT_MAX, maxi = res.back()-res.front();
           for(int i=1;i<res.size();i++)
           mini = min(mini,res[i]-res[i-1]);
           
           return {mini,maxi};
        }
    }
};
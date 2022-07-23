/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *floyedDetectionLoop(ListNode *head)
    {
        if(head==NULL)
        {
            return NULL;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
            if(slow==fast)
            {
                return slow;
            }
        }
        return NULL;
}
   
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL)
        {
            return NULL;
        }
        ListNode* intersection=floyedDetectionLoop(head);
        if(intersection==NULL)
        {
            return NULL;
        }
        ListNode* slow=head;
        while(slow!=intersection){
        slow=slow->next;
        intersection=intersection->next;
        }
        return slow;
    }
};
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
    bool hasCycle(ListNode *head) {
        if(head==NULL)
        {
            return false;
        }
        //using two pointer fast and slow to traverse the list
        ListNode *fast=head;
        ListNode *slow=head;
        // till fast and fast-> next not reaches NULL
		// we will increment fast by 2 step and slow by 1 step
       while(fast!=NULL && fast->next!=NULL)
       {
           fast=fast->next->next;
           slow=slow->next;
       if(fast==slow)
        {
            return true;
}
       }
        return false;
    }
};
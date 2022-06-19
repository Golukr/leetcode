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
        ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* currentptr= head;
        ListNode* prevptr= NULL;
        ListNode* nextptr;
        int count=0;
         int len=0;
        ListNode *ptr=head;
        while(ptr!=NULL){
            ptr=ptr->next;
            len++;
        }
        if(len<k)
            return head;
        while(currentptr and count<k){
            nextptr= currentptr->next;
            currentptr->next= prevptr;
            prevptr= currentptr;
            currentptr= nextptr;   
            count++;
        }
        if(nextptr){
            head->next= reverseKGroup(nextptr,k);
        }
        return prevptr;
    }
};
    
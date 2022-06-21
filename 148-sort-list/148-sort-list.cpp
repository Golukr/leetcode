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
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        
        ListNode* temp=NULL;
        ListNode* slow=head;
        ListNode* fast=head;
        //finding middle of linked list
        while(fast!=NULL && fast->next!=NULL)
        {
            temp=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        temp->next=NULL;
        
        ListNode* l1=sortList(head);
        ListNode* l2=sortList(slow);
        return merge(l1,l2);
    }
    ListNode* merge(ListNode *left, ListNode *right) {
		ListNode *cur = nullptr;
		if(!left) return right;
		if(!right) return left;
		if(left->val < right->val) {
			cur = left;
			cur->next = merge(left->next, right);
		} else {
			cur = right;
			cur->next = merge(left, right->next);
		}
		return cur;
	}
};

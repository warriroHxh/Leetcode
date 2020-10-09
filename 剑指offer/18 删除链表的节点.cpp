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
    ListNode* deleteNode(ListNode* head, int val) {
		ListNode* ptr = head;
		ListNode* before = head;
		if(head->val == val) return head->next;
		while(ptr->val != val)
		{
			before = ptr;
			ptr = ptr->next;
		}
		before->next = before->next->next;
		delete ptr;
		return head;
    }
};
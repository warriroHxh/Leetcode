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
    ListNode* reverseList(ListNode* head) {
		stack<int> s;
		ListNode* ptr = head;
		while(ptr)
		{
			s.push(ptr->val);
			ptr = ptr->next;
		}
		ListNode* h = new ListNode(0);
		ListNode* ph = h;
		while(!s.empty())
		{
			h->next = new ListNode(s.top());
			h = h->next;
			s.pop();
		}
		return ph->next;
    }
};
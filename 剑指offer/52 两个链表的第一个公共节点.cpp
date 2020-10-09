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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        stack<ListNode*> sa;
		stack<ListNode*> sb;
		while(headA)
		{
			sa.push(headA);
			headA = headA->next;
		}
		while(headB)
		{
			sb.push(headB);
			headB = headB->next;
		}
        if(sa.empty() || sb.empty()) return NULL;
		ListNode* ta = sa.top();
		ListNode* tb = sb.top();
		if(ta != tb) return NULL;
		while(!sa.empty() && !sb.empty())
		{
			if(sa.top() == sb.top())
			{
				ta = sa.top();
				tb = sb.top();
				sa.pop();
				sb.pop();
			}
			else return ta;
		}
		if(sa.empty()) return ta;
		else return tb;
    }
};
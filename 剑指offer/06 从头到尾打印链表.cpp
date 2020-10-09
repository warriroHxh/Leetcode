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
    vector<int> reversePrint(ListNode* head) {
		stack<int> s;
		ListNode* ptr = head;
		while(ptr)
		{
			s.push(ptr->val);
			ptr = ptr->next;
		}
		vector<int> v(s.size(), 0);
		int i = 0;
		while(!s.empty())
		{
			v[i] = s.top();
			s.pop();
			i++;
		}
		return v;
    }
};
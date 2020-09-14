/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int kthLargest(TreeNode* root, int k) {
		stack<TreeNode*> s;
		vector<int> v;
		TreeNode* p = root;
		while(p)
		{
			s.push(p);
			p = p->left;
		}
		while(!s.empty())
		{
			TreeNode* tmp = s.top();
			s.pop();
			v.push_back(tmp->val);
			tmp = tmp->right;
			while(tmp)
			{
				s.push(tmp);
				tmp = tmp->left;
			}
		}
		return v[v.size()-k];
    }
};
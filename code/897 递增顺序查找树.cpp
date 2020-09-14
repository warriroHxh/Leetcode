class Solution {
public:
    TreeNode* increasingBST(TreeNode* root) {
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
		TreeNode* head = new TreeNode();
		TreeNode* ptr = head;
		for(int i =0; i < v.size(); i++)
		{
			ptr->right = new TreeNode(v[i]);
			ptr = ptr->right;
		}
		return head->right;
    }
};
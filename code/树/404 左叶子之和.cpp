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
    int sumOfLeftLeaves(TreeNode* root) {
		int sum = 0;
		stack<TreeNode*> s;
		while(root)
		{
			s.push(root);
			root = root->left;
		}
		while(!s.empty())
		{
			TreeNode* tmp = s.top();
			s.pop();
			if(tmp->left && isLeaf(tmp->left))
				sum += tmp->left->val;
			tmp = tmp->right;
			while(tmp)
			{
				s.push(tmp);
				tmp = tmp->left;
			}
		}
		return sum;
    }

	bool isLeaf(TreeNode * root)
	{
		if(!root) return false;
		if(!root->left && !root->right)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};
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
    int rangeSumBST(TreeNode* root, int L, int R) {
        stack<TreeNode*> s;
		int sum = 0;
		while(root)
		{
			s.push(root);
			root = root->left;
		}
		while(!s.empty())
		{
			TreeNode* tmp = s.top();
			s.pop();
			if(L <= tmp->val && tmp->val <= R) sum += tmp->val;
			tmp = tmp->right;
			while(tmp)
			{
				s.push(tmp);
				tmp = tmp->left;
			}
		}
		return sum;
    }
};
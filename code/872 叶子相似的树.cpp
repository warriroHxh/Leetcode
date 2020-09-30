/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> left = getLeafVector(root1);
		vector<int> right = getLeafVector(root2);
		if(left == right)
			return true;
		else
			return false;
    }

	vector<int> getLeafVector(TreeNode* root)
	{
		stack<TreeNode*> s;
		vector<int> v;
		while(root)
		{
			s.push(root);
			root = root->left;
		}
		while(!s.empty())
		{
			TreeNode* tmp = s.top();
			s.pop();
			if(isLeaf(tmp))
				v.push_back(tmp->val);
			tmp = tmp->right;
			while(tmp)
			{
				s.push(tmp);
				tmp = tmp->left;
			}
		}
		return v;
	}

	bool isLeaf(TreeNode* root)
	{
		if(!root) return false;
		if(!root->left && !root->right) return true;
		else return false;
	}
};
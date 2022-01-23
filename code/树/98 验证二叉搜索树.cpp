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
    bool isValidBST(TreeNode* root) {
        stack<TreeNode*> s;
		vector<int> v;
		TreeNode* ptr = root;
		if(!root) return true;
		while(ptr)
		{
			s.push(ptr);
			ptr = ptr->left;
		}
		while(!s.empty())
		{
			TreeNode* temp = s.top();
			s.pop();
			v.push_back(temp->val);
			temp = temp->right;
			while(temp)
			{
				s.push(temp);
				temp = temp->left;
			}
		}
		for(int i = 0; i < v.size()-1; i++)
		{
			if(v[i] >= v[i+1]) return false;
		}
		return true;
    }
};
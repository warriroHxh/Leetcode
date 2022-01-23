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
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
		stack<TreeNode*> s1;
		stack<TreeNode*> s2;
		vector<int> result;
		while(root1 || root2)
		{
			if(root1)
			{
				s1.push(root1);
				root1 = root1->left;
			}
			if(root2)
			{
				s2.push(root2);
				root2 = root2->left;
			}
		}
		while(!s1.empty() || !s2.empty())
		{
			TreeNode* t1 = s1.empty()?NULL:s1.top();
			TreeNode* t2 = s2.emoty()?NULL:;
			if(t1->val <= t2->val)  // s1 小
			{
				result.push_back(t1->val);
				s1.pop();
				t1 = t1->right;
				while(t1)
				{
					s1.push(t1);
					t1 = t1->left;
				}
			}
			else
			{
				result.push_back(t2->val);
				t2 = t2->right;
				s2.pop();
				while(t2)
				{
					s2.push(t2);
					t2 = t2->left;
				}
			}
		}
        return result;
    }
};
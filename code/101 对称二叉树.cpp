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
    bool isSymmetric(TreeNode* root) {
        if(root)
		{
			stack<TreeNode*> sl;
			stack<TreeNode*> sr;
			TreeNode* ptr_left = root->left;
			TreeNode* ptr_right = root->right;
			while(ptr_left && ptr_right)
			{
				if(ptr_right)
				{
					sl.push(ptr_left);
					sr.push(ptr_right);
					ptr_left = ptr_left->left;
					ptr_right = ptr_right->right;
				}
				else return false;
			}
			if(ptr_left || ptr_right) return false;
			while(!sl.empty() && !sr.empty())
			{
				TreeNode* tl = sl.top();
				sl.pop();
				TreeNode* tr = sr.top();
				sr.pop();
				if((tl == NULL && tr == NULL) || (tl->val == tr->val))
				{
					tl = tl->right;
					tr = tr->left;
					while(tl && tr)
					{
						sl.push(tl);
						tl = tl->left;
						sr.push(tr);
						tr = tr->right;
					}
					if(tl || tr) return false;
				}
				else return false;
			}
			if(!sl.empty() || !sr.empty()) return false;
			else return true;
		}
		else return true;
    }
};
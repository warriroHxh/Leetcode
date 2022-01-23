/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class BSTIterator {
public:
	stack<TreeNode*> s;
    BSTIterator(TreeNode* root) {
		TreeNode* ptr = root;
		while(ptr)
		{
			s.push(ptr);
			ptr = ptr->left;
		}
    }

    /** @return the next smallest number */
    int next() {
		TreeNode* tmp = s.top();
		s.pop();
		int r = tmp->val;
		tmp = tmp->right;
		while(tmp)
		{
			s.push(tmp);
			tmp = tmp->left;
		}
		return r;
    }

    /** @return whether we have a next smallest number */
    bool hasNext() {
		return s.empty() ? false : true;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
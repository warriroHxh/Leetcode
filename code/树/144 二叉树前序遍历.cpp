
//二叉树的前序遍历

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

#include <vector>
#include <stack>
//二叉树的中序遍历
using namespace std;
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*> s;
        vector<int> r;
        if(!root)
            return r;
        s.push(root);
        while(!s.empty())
        {
            TreeNode * tmp = s.top();
            r.push_back(tmp->val);
            s.pop();
            if(tmp->right)
                s.push(tmp->right);
            if(tmp->left)
                s.push(tmp->left);
        }
        return r;
    }
};





struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    vector<int> v;
    vector<int> postorderTraversal(TreeNode* root)
    // 二叉树后序遍历递归实现
    {
        if(!root)
            return v;
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        if(root)
            v.push_back(root->val);
        return v;
    }
};
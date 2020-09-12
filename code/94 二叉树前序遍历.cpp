
//二叉树的中序遍历  

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

#include <vector>
#include <stack>
using namespace std;
class Solution {
public:
    // 非递归实现 栈
    vector<int> inorderTraversal(TreeNode* root) {
        TreeNode * p = root;
        stack<TreeNode*> s;
        vector<int> v;
        while(p)
        {
            s.push(p);
            p = p->left;
        }
        while(!s.empty())
        {
            auto ptr = s.top();
            v.push_back(ptr->val);
            s.pop();
            ptr = ptr->right;
            while(ptr)
            {
                s.push(ptr);
                ptr = ptr->left;
            }
        }
        return v;
    }
};



#include <vector>
#include <stack>
#include <queue>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// 二叉树的层序遍历 嵌套队列实现
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v;
        queue<queue<TreeNode*>> q;
        if(!root)
            return v;
        queue<TreeNode*> tmp;
        tmp.push(root);
        q.push(tmp);
        while(!q.empty())
        {
            tmp = q.front();
            queue<TreeNode*> tq;
            vector<int> tv;
            while(!tmp.empty())
            {
                TreeNode* tn = tmp.front();
                tmp.pop();
                tv.push_back(tn->val);
                if(tn->left)
                    tq.push(tn->left);
                if(tn->right)
                    tq.push(tn->right);
            }
            q.pop();
            if(!tq.empty())
                q.push(tq);
            if(!tv.empty());
                v.push_back(tv);
        }
        return v;
    }
};
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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
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
            if(tv.size() != 0)
                v.push_back(tv);
        }
        vector<vector<int>> result;
        for(int i = v.size()-1; i>=0;i--)
        {
            result.push_back(v[i]);
        }
        return result;
    }
};
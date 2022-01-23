
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) {
        stack<Node*> s;
		vector<int> v;
		if(!root)
			return v;
		s.push(root);
		while(!s.empty())
		{
			Node* tmp = s.top();
			s.pop();
			v.push_back(tmp->val);
			if(0 != tmp->children.size())
			{
				int size = tmp->children.size();
				for(int i = size-1; i>=0; i--)
				{
					s.push(tmp->children[i]);
				}
			}
		}
		return v;
    }
};
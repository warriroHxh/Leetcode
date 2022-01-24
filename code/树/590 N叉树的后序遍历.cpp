class Solution {
public:
    vector<int> postorder(Node* root) {
        std::vector<int> nums;
        helper(nums, root);
        return nums;
    }
    void helper(std::vector<int> & nums, Node * root){
        if(root){
            for(auto iter = root->children.begin(); iter != root->children.end(); ++iter){
                helper(nums, *iter);
            }
            nums.push_back(root->val);
        }
    }
};
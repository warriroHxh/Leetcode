class Solution {
public:
    int getMinimumDifference(TreeNode* root) {
        std::vector<int> nums;
        helper(nums, root);
        int a = nums.size() - 1;
        int min = INT32_MAX;
        int tmp = 0;
        for(int i = 0; i < a; ++i){
            tmp = abs(nums.at(i+1) - nums.at(i));
            min = (tmp < min ? tmp : min);
        }
        return min;
    }

    void helper(std::vector<int> & nums, TreeNode * root){
        if(root){
            helper(nums,root->left);
            nums.push_back(root->val);
            helper(nums, root->right);
        }
    }
};
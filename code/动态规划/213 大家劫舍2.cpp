class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size() == 1) {
            return nums.at(0);
        }
        else {
            vector<int> a{ nums.begin(), nums.end() - 1 };
            vector<int> b{ nums.begin() + 1, nums.end() };
            return std::max(helper(a), helper(b));
        }
    }
    int helper(vector<int>& nums) {
        if (nums.size() == 1) {
            return nums.at(0);
        }
        else if (nums.size() == 2) {
            return std::max(nums.at(0), nums.at(1));
        }
        else {
            int array[101] = { 0 };
            array[0] = nums.at(0);
            array[1] = std::max(nums.at(0), nums.at(1));
            for (int i = 2; i < nums.size(); ++i) {
                array[i] = std::max(array[i - 1], array[i - 2] + nums.at(i));
            }
            return array[nums.size() - 1];
        }
    }
};

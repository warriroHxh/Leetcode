class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        std::unordered_map<int, int> map;
        for(auto iter = nums.begin(); iter != nums.end(); ++iter){
            if(map.find(*iter) == map.end()){
                map.insert(std::make_pair(*iter, *iter));
            }
            else{
                return *iter;
            }
        }
        return 0;
    }
};
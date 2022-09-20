class Solution {
public:
    int climbStairs(int n) {
        int array[60] = {0};
        array[0] = 1;
        array[1] = 2;
        if(n == 1){
            return 1;
        }
        else if(n == 2){
            return 2;
        }
        else{
            for(int i = 3; i <= n; ++i){
                array[i-1] = array[i-2] + array[i-3];
            }
            return array[n-1];
        }
    }
};
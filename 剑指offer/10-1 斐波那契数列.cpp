class Solution {
public:
    int fib(int n) {
        int array[101] = {0};
        array[0] = 0;
        array[1] = 1;
        for(int i = 2; i <= n; i++){
            array[i] = array[i-2] % 1000000007 + array[i-1] % 1000000007;
        }
        return array[n] % 1000000007;
    }
};
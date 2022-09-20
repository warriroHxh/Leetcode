/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int left = 0;
        int right = n;
        while (left <= right) {
            int mid = (left - right) / 2 + left;
            int rtn = guess(mid);
            if (rtn == 0)
                return mid;
            else if (rtn == 1)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return 0;
    }
};
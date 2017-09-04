class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        reverse = str(x)[::-1]
        if str(x) == reverse:
            return True
        else:
            return False

if __name__ == '__main__':
    a = Solution()
    print a.isPalindrome(23456)
    print a.isPalindrome(23432)

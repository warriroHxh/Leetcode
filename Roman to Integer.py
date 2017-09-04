
class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        result = 0
        result = self.translate(s[-1]) + result
        while(len(s)>1):
            stand = self.translate(s[-1])
            s = s[:-1]
            temp = self.translate(s[-1])
            if temp >= stand:
                result = result + temp
            else:
                result = result - temp
        return result

    def translate(self,temp):
        if temp == 'I':
            temp = 1
        elif temp == 'V':
            temp = 5
        elif temp == 'X':
            temp = 10
        elif temp == 'L':
            temp = 50
        elif temp == 'C':
            temp = 100
        elif temp == 'D':
            temp = 500
        elif temp == 'M':
            temp = 1000
        return temp

if __name__ == '__main__':
    a = Solution()
    print a.translate('L')
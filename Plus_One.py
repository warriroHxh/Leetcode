class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        print type(x)
        if type(x) != int:
            print '2222'
            return 0
        else:
            if x > 0:
                result = self.reverse2(x)
            else:
                x = 0 - x
                result = self.reverse2(x)
                result = 0 - result;
            return result

    def reverse2(self,target_num,result = 0):
        temp_result = target_num%10;
        target_num = target_num/10;
        result = result * 10 + temp_result;
        if target_num != 0:
            result = self.reverse2(target_num,result)
        return result

    def check(self,target_num):
        if target_num>=0:
            return target_num
        else:
            target_num = 0 - target_num
            return target_num

if __name__ =='__main__':
    a = Solution()
    print a.reverse(1)
    print '=================='
    print a.reverse(234)

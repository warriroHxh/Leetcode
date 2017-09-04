class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        retype = []
        for i in range(0,len(nums)):
            for j in range(i+1,len(nums)):
                if nums[i]+nums[j] == target:
                    return [i,j]
                else:
                    continue
        return False


if __name__ =='__main__':
    a = Solution()
    nums = [3,2,4,7]
    target = 9
    print a.twoSum(nums,target)
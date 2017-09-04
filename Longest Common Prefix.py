class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        num_common = 1
        while(num_common == len(strs)):
            for one_str in strs:
                if
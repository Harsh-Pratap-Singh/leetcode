class Solution(object):
    def minPartitions(self, n):
        """
        :type n: str
        :rtype: int
        """
        for digit in range(9, 0, -1):
            if str(digit) in n:
                return digit
        return 0  

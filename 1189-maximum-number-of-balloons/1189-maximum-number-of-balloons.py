class Solution(object):
    def maxNumberOfBalloons(self, text):
        """
        :type text: str
        :rtype: int
        """
        co=Counter(text)
        return min(co['b'],co['a'],co['l']//2,co['o']//2,co['n'])
        
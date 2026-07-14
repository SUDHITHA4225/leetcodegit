class Solution(object):
    def arrayRankTransform(self, arr):
        """
        :type arr: List[int]
        :rtype: List[int]
        """
        temp = sorted(set(arr))

        rank = {}
        r = 1
        for num in temp:
            rank[num] = r
            r += 1

        ans = []
        for num in arr:
            ans.append(rank[num])

        return ans
        
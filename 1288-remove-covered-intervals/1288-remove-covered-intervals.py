class Solution(object):
    def removeCoveredIntervals(self, intervals):
        """
        :type intervals: List[List[int]]
        :rtype: int
        """
      
        intervals.sort(key=lambda x: (x[0], -x[1]))

        c = 0
        m = 0

        for start, end in intervals:
            if end > m:
                c+= 1
                m = end

        return c

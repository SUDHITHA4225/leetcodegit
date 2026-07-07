class Solution(object):
    def sumAndMultiply(self, n):
        """
        :type n: int
        :rtype: int
        """
        arr=[]
        while n!=0:
            r=n%10
            if r!=0:
                arr.append(r)
            n//=10
        arr.reverse()
        s=0
        for i in range(len(arr)):
            s=s*10+arr[i]
        t=0
        for i in range(len(arr)):
            t+=arr[i]
        return s*t
class Solution(object):
    def myAtoi(self, s):
        n = ""
        s = s.lstrip()

        sign = 1
        start = 0

        if len(s) > 0 and s[0] == '-':
            sign = -1
            start = 1
        elif len(s) > 0 and s[0] == '+':
            start = 1

        for ch in s[start:]:
            if ch.isdigit():
                n += ch
            else:
                break

        if not n:
            return 0

        ans = sign * int(n)

        if ans < -2147483648:
            return -2147483648

        if ans > 2147483647:
            return 2147483647

        return ans
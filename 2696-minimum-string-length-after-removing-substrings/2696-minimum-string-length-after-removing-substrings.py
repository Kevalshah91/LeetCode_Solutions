class Solution:
    def minLength(self, s: str) -> int:
        a = [x for x in s]
        i = 0
        while i < len(a) - 1:
            if (a[i] == "A" and a[i + 1] == "B") or (a[i] == "C" and a[i + 1] == "D"):
                del a[i:i + 2]
                i = max(i - 1, 0)
            else:
                i += 1
        return (len(a))
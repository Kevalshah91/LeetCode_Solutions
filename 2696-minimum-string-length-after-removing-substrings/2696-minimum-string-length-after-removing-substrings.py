class Solution:
    def minLength(self, s: str) -> int:
        a = []
        for b in s:  
            if not a:
                a.append(b)
                continue
            if (a[-1] == 'A' and b == "B") or (a[-1] == 'C' and b == "D"):
                a.pop()
            else:
                a.append(b)
        return len(a)
        
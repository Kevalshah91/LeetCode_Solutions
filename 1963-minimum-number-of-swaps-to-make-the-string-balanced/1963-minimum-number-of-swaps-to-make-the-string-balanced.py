class Solution:
    def minSwaps(self, s: str) -> int:
        swap=0
        b=0
        for char in s:
            if char=="[":
                b-=1
            else:
                b+=1
                if b>0:
                    swap+=1 
                    b-=1 
        g = (swap+1) // 2
        return g
                
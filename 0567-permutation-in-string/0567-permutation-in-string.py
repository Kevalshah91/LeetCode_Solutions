class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        n=len(s1)
        m=len(s2)
        if m<n:
            print("False")
            return False
        a=[0]*26
        b=[0]*26
        for i in range(n):
            a[ord(s1[i])-ord("a")]+=1
            b[ord(s2[i])-ord("a")]+=1 

        for i in range(m-n):
            if a==b:
                return True
            b[ord(s2[i])-ord("a")]-=1
            b[ord(s2[i+len(s1)])-ord("a")]+=1

        return a==b
class Solution:
    def dividePlayers(self, skill: List[int]) -> int:
        skill.sort()
        n=len(skill)
        total=0
        t=skill[0]+skill[-1]
        for i in range(n//2):
            if skill[i]+skill[n-i-1] != t:
                return -1
            total += skill[i]*skill[n-i-1]
        return total
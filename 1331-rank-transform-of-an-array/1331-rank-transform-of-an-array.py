class Solution:
    def arrayRankTransform(self, arr: List[int]) -> List[int]:
        if (len(set(arr))==1):
            return [1]*len(arr)
        s=sorted(set(arr))
        m={}
        for rank,value in enumerate(s,start=1):
            m[value]=rank
        result = [m[num] for num in arr]
        return result
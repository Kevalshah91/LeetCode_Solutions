class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        l1=list(nums1)
        l2=list(nums2)
        result = []
        if len(l1)>len(l2):
            for num in l2:
                if num in l1:
                    result.append(num)
        else:
            for num in l1:
                if num in l2:
                    result.append(num)
        return set(result)
        
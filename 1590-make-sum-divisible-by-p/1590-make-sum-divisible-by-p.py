class Solution:
    def minSubarray(self, nums: List[int], p: int) -> int:
        rem = sum(nums) % p
        prefixsum = 0
        prefixmod = {0: -1}
        n = len(nums)

        if rem == 0:
            return 0

        min_length = n  

        for i in range(n):
            prefixsum += nums[i]
            curmod = prefixsum % p
            target = (curmod - rem + p) % p
            
            if target in prefixmod:
                min_length = min(min_length, i - prefixmod[target])
                
            prefixmod[curmod] = i

        return min_length if min_length < n else -1
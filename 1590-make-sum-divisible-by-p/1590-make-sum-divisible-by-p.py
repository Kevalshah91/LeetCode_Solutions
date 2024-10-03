class Solution:
    def minSubarray(self, nums: List[int], p: int) -> int:
        rem = sum(nums) % p
        prefixsum = 0
        mapp = {0: -1}
        n = len(nums)

        if rem == 0:
            return 0

        min_length = n  

        for i in range(n):
            prefixsum += nums[i]
            ptr = prefixsum % p
            target = (ptr - rem + p) % p
            
            if target in mapp:
                min_length = min(min_length, i - mapp[target])
                
            mapp[ptr] = i

        return min_length if min_length < n else -1
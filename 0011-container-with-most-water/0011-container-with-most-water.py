class Solution:
    def maxArea(self, height: List[int]) -> int:
        ptr1 = 0
        ptr2 = len(height)-1
        a = 0
        a_max=0
        while ptr1 < ptr2:
            x = ptr2 - ptr1
            h1 = min(height[ptr1], height[ptr2])
            a1 = h1 * x
            a_max = max(a_max, a1)

            if height[ptr1] < height[ptr2]:
                ptr1 += 1
            else:
                ptr2 -= 1
        return a_max
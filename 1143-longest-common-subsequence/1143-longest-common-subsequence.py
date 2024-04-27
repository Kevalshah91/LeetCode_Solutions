class Solution:
    def longestCommonSubsequence(self, text1: str, text2: str) -> int:
        len_x, len_y = len(text1), len(text2)
    
        text1, text2 = text2, text1
        len_x, len_y = len_y, len_x
    
        LCS = [0] * (len_x + 1)
        for j in range(1, len_y + 1):
            prev = 0
            for i in range(1, len_x + 1):
                temp = LCS[i]
                if text1[i - 1] == text2[j - 1]:
                    LCS[i] = prev + 1
                else:
                    LCS[i] = max(LCS[i], LCS[i - 1])
                prev = temp
        return LCS[len_x]
        
import numpy as np
class Solution:
    def transpose(self, matrix: List[List[int]]) -> List[List[int]]:
        mat = np.array(matrix)
        result = mat.T
        res = result.tolist()
        return res
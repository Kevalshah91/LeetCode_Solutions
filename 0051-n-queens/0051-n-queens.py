class Solution:
    def __init__(self):
        self.board = [0] * 100
        self.result = []

    def is_safe(self, i, k):
        for j in range(1, k):
            if self.board[j] == i or abs(self.board[j] - i) == abs(k - j):
                return False
        return True

    def n_queens(self, k, n):
        if k == n + 1:
            solution = []
            for i in range(1, n + 1):
                row = ['.'] * n
                row[self.board[i] - 1] = 'Q'
                solution.append(''.join(row))
            self.result.append(solution)
        else:
            for i in range(1, n + 1):
                if self.is_safe(i, k):
                    self.board[k] = i
                    self.n_queens(k + 1, n)

    def solveNQueens(self, n: int):
        self.n_queens(1, n)
        formatted_result = []
        for res in self.result:
            formatted_result.append(["".join(row) for row in res])
        return formatted_result

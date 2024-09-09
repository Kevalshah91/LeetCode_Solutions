# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def spiralMatrix(self, m: int, n: int, head: Optional[ListNode]) -> List[List[int]]:
        k = [[-1] * n for _ in range(m)]
        k[0][0] = head.val
        head = head.next
        r=0
        c=0
        cr=0
        cc=1
        while head:
            if r+cr in range(m) and c+cc in range(n) and k[r+cr][c+cc] == -1:
                r+=cr 
                c+=cc
                k[r][c]=head.val
                head=head.next
            else:
                cr,cc = cc,-cr
        return k
class Solution:
    def isPalindrome(self, s: str) -> bool:
        if not s:
            return True
        else:
            str1 = ''.join(char.lower() for char in s if char.isalnum())
            return str1 == str1[::-1]
        
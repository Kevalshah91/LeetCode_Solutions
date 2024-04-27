class Solution:
    def finalString(self, s: str) -> str:
        result = ""
        for i in range(len(s)):
            if s[i]=='i':
                result = result[:i][::-1]
            else:
                result+=s[i]
        return result
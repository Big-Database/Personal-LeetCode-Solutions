class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        if not s:
            return 0
        left = 0
        maxlen = 0
        encountered = set()
        for right in range(len(s)):
            while s[right] in encountered:
                encountered.remove(s[left])
                left += 1
            encountered.add(s[right])
            maxlen = max(maxlen, right - left + 1)
        return maxlen

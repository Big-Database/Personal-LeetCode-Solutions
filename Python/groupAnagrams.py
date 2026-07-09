import collections
from typing import List

class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        listdic = collections.defaultdict(list)
        for word in strs:
            alphabet = [0] * 26
            for c in word:
                alphabet[ord(c) - ord('a')] += 1
            listdic[tuple(alphabet)].append(word)
        return list(listdic.values())

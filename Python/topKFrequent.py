import heapq
from typing import List

class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        # dic with number key and frequency
        # loop through dic to build maxheap
        freq = {}
        for num in nums:
            freq[num] = freq.get(num, 0) +1
        maxheap = []
        lis = [0]*k
        for key, value in freq.items():
            heapq.heappush(maxheap, (-value, key))   # order by frequency
        for i in range(k):
            lis[i] = heapq.heappop(maxheap)[1]        # extract the number
        return lis

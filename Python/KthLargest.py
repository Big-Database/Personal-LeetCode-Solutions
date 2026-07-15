import heapq
class Solution:
    def findKthLargest(self, nums: List[int], k: int) -> int:
        """ 
        This is doable:
        First instinct is to use a heap if we want the kth largest element, we can simply pop until we get the kth largest so n + klogn so technically O(n)


        ok we will use a minheap, and then we will essentially 

        """
        minheap = nums[:k]
        heapq.heapify(minheap)

        for val in nums[k:]:
            if minheap[0] < val:
                heapq.heappop(minheap)
                heapq.heappush(minheap, val)
        return minheap[0]

        
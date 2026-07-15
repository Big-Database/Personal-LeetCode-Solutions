class MedianFinder:
    def __init__(self):
        # structure 
        self.pq_lo = []
        self.pq_hi = []

    def addNum(self, num: int) -> None:
        # add from the data stream to the structure 
        heappush(self.pq_lo, -num) # we first put the num in a maxheap this reorgs
        heappush(self.pq_hi, -heappop(self.pq_lo)) # then we take the max and put it in a min heap, reorg once again, now both heaps are structurally correct, we now ensure out invariant which is that pq_lo is always equal or bigger 
        if len(self.pq_hi) > len(self.pq_lo):
            heappush(self.pq_lo, -heappop(self.pq_hi)) # pushing back into min_heap if maxheap is larger, such that when we find the median it's easier 
        

    def findMedian(self) -> float:
        if (len(self.pq_lo) > len(self.pq_hi)):
            return -self.pq_lo[0]
        return (-self.pq_lo[0] + self.pq_hi[0])/2

# Your MedianFinder object will be instantiated and called as such:
# obj = MedianFinder()
# obj.addNum(num)
# param_2 = obj.findMedian()
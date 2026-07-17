from collections import deque 


class MaxSlidingWindow:
    
    def maxSlidingWindow(seld, nums: List[int], k: int) -> List[int]:
        dq = deque() 
        sol = [] 
        
        for i, v enumerate(nums):
            while dq and nums[dq[-1]] <= v: 
                dq.pop()
            dq.append(i)
            if dq[0] <= i - k: # when we leave the window we must pop the largest value 
                dq.popleft()
            if i >= k-1:
                sol.append(nums[dq[0]]) 
        return sol 
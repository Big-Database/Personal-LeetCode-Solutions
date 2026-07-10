from typing import List

class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        minimum = prices[0]
        profit = 0
        for price in prices[1:]:
            if price < minimum:
                minimum = price
            else:
                profit = max(price - minimum, profit)

        return profit

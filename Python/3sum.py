class Solution:
    def threeSum(self, nums: list[int]) -> list[list[int]]:
        solution = [] 
        nums.sort() # sort in place. 
        
        for i in range(len(nums)):
            if i > 0 and nums[i] == nums[i-1]: # skip if the two values are the same ... why idk yet
                continue 
            j = i + 1 # second pointer is slightly ahead 
            k = len(nums) - 1 # third pointer is at the end of the array 

            while j < k: # whilst the third pointer is still bigger than the middle one 
                total = nums[i] + nums[j] + nums[k]
                if total > 0:# if we are above 0, we shift the big guy smaller 
                    k -= 1 
                elif total < 0: # we need to shift the middle guy to the right, because we want to increase the numbers 
                    j += 1

                else: # so we are trying to find all unique solution instead of just one 
                    solution.append([nums[i], nums[j], nums[k]])
                    while j < k and nums[j] == nums[j+1]: # so if the middle val is less than the end and the next number is the same we increment, because that would produce us the same set of values i.e it's no longer unique 
                        j += 1
                    while j < k and nums[k] == nums[k-1]: # the same applies for the opposite direction ... but for k ... so we exhaust all of these, since it's sorted so we have no duplicates
                        k -= 1
                    j += 1 # then once we've found a pair we shift the middle value up by one since the last value has decreased. 
                    k -= 1

        return solution 

        """
        alternatively if we sort the array, we can get O(nlogn) expected time complexity 
        worst case time complexity is O(n^2)
        then we can use 3 pointers 

        
        if it is sorted from smallest to largest we can definitely decide when somehting how to move it, problem is just how not sure
        
        """



        """ 
        Our restrictions include that we want a triplet from nums s.t 
        the three numbers are not the same and thant their sum is 
        equal to zero, 
        
        We can maybe have dictionary that keeps track of the next number that we need 

        so on the first pass 
        we take the number and the key will be it's value and the number it's index 

        we'll take a seperate dictionary that'll compute the combination of the sums and store
        the value as pairs. so everytime we move forward we update the pre existing stuff

        so then this solution will have O(n^2) in both space and time complexity
        """
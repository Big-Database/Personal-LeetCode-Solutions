
#include <vector>
using namespace std;
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        bool removed = false; 
        bool zeroFound = false; 
        int subarray_len = 0; 
        int max = 0; 
        int slow, fast = 0; 
        while(fast < nums.size()){
            if(nums[fast] == 0 && removed){
                max = subarray_len > max? subarray_len: max;  // 1,0,0,0,1,0,1
                subarray_len = 0; 
                removed = false; 
                fast = slow; 
                zeroFound = true; 
            }else if(nums[fast] == 0 && !removed){
                removed = true; 
                slow = fast+1; 
                fast++; 
                zeroFound = true; 

            }
            else{
                subarray_len++; 
                fast++; 
            }
        }
        max = subarray_len > max? subarray_len: max; 
        
        return zeroFound?max:max-1; 
    }
};

void test() {
    Solution s;
    vector<int> n1 = {1,1,0,1};
    cout << s.longestSubarray(n1) << "\n"; // expected: 3
    vector<int> n2 = {0,1,1,1,0};
    cout << s.longestSubarray(n2) << "\n"; // expected: 3
    vector<int> n3 = {1,1,1};
    cout << s.longestSubarray(n3) << "\n"; // expected: 2
}

// 0 0 0 0 0 1
/*
Ok so this is under 2 pointers 
Keep a count of the max 
So the first pointer moves forward and checks for zeros the second pointer stays behind 

[1,1,0,1,1] --> 4
[1,1,1,0] --> 3
[0,1,1,1] --> 3 

So if we encounter our first zero we keep track of this 


*/
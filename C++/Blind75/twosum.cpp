#include <iostream> 
#include <vector> 
#include <algorithm> 
using namespace std;

/*

Given an array of integer nums and an integer target, return
indices of the two numbers such that they add up to the target.

You may assume that each input would have exactly one solution,
and you may not use the same element twice.

You can return the answer in any order.
Input: nums = [2,7,11,15], target = 9
Output: [0,1]

Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].


*/

class Solution{
    public:
    vector<int> twoSum(vector<int> nums, int target){
        // TODO: not yet implemented
        return {};
    }
};

void test() {
    Solution s;
    auto r = s.twoSum({2,7,11,15}, 9);
    cout << "[" << r[0] << "," << r[1] << "]\n"; // expected: [0,1]
}
#include <vector>
using namespace std;

class Solution {
public:
   int longestOnes(vector<int>& nums, int k) {
    int forward = 0; 
    int behind = 0; 
    int count = 0; 
    int max = 0; 
        while(forward < nums.size()){
            if (nums[forward] == 1){
                count++;
            }else if (k > 0){
                k--;
                count++;
            }else {
                while(behind < forward && nums[behind] == 1){
                    count--; 
                    behind++; 
                }
                behind++; 
            }
            forward++; 
            max = max < count? count : max; 
        }
        max = max < count? count : max; 
    return max; 
    }
};

void test() {
    Solution s;
    vector<int> n1 = {1,1,1,0,0,0,1,1,1,1,0};
    cout << s.longestOnes(n1, 2) << "\n"; // expected: 6
    vector<int> n2 = {0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};
    cout << s.longestOnes(n2, 3) << "\n"; // expected: 10
}

/*

Ok same concept except what if now it's not true false but k flips 


*/
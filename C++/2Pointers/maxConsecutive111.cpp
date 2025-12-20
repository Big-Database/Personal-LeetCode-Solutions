#include <vector>
using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int subarray_len = 0; 
        int fast,slow = 0; 
        int current_flip = 0; 
        int max= 0; 
        while(fast < nums.size()){ // 1,1,1,0,0,0,1,1,1,1,0
            if(nums[fast] == 0 && current_flip == k){
                max = subarray_len>max? subarray_len:max;
                slow = fast;
                subarray_len = 0; 
                current_flip = 0; 
            }else if(nums[fast] == 0 && current_flip < k){
                current_flip++; 
                subarray_len++; 
                fast++; 
            }else if(nums[fast]==0 && current_flip == 0){
                slow = fast; 
                fast++; 
                subarray_len++; 
                current_flip++; 
            }else{
                subarray_len++; 
                fast++; 
            }
        }
        max = subarray_len>max? subarray_len:max;
        return max; 
    }
};

/*

Ok same concept except what if now it's not true false but k flips 


*/
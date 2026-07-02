#include <vector>
#include <iostream>
using namespace std;

/*
        So we are trying to do something in one pass, modifying the current array without creating a new one --> most likely greedy or two pointers 

        So we have the ptr1 in front, if ptr1 is non zero we know we want to swap the previous elements 

    0: [0,1,0,3,12] z: 0, i: 0 
                    z: 
    1: 
*/




class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int zero_ptr = 0;
        for(u_int i = 0; i < nums.size(); i++){
            if(nums[i] != 0) {
                nums[zero_ptr] = nums[i];
                zero_ptr++;
            }
        }
        for(u_int i = zero_ptr; i < nums.size(); ++i){
            nums[i] = 0;
        }
    }
};

void test() {
    Solution s;
    vector<int> n1 = {0,1,0,3,12};
    s.moveZeroes(n1);
    print_int_vec(n1); // expected: [ 1, 3, 12, 0, 0 ]
    vector<int> n2 = {0};
    s.moveZeroes(n2);
    print_int_vec(n2); // expected: [ 0 ]
}
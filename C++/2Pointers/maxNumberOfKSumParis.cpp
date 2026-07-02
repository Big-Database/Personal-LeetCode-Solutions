#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
class Solution {
public:

    void print_int_vec(vector<int> & nums){
        std::cout<<"[ "; 
        for(u_int i = 0; i < nums.size()-1; i++){
            std::cout<< nums[i]<< ", "; 
        }
        std::cout<< nums[nums.size()-1]<<" ]"<<std::endl; 
    }

    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end()); 
        int left = 0; 
        int right = nums.size()-1; 
        int count = 0; 
        while(left < right){
            int sum = nums[left]+nums[right]; 
            if(sum == k){
                count++; 
                left++; 
                right--; 
            }else if(sum > k){
                right--; 
            }else{
                left++;
            }
        }
        return count; 
    }
};

void test() {
    Solution s;
    vector<int> n1 = {1,2,3,4};
    cout << s.maxOperations(n1, 5) << "\n"; // expected: 2
    vector<int> n2 = {3,1,3,4,3};
    cout << s.maxOperations(n2, 6) << "\n"; // expected: 1
}

/*

Ok so my solution is we sort the array, then start on opposite ends 

if the smallest and largest make the desired pair, we continue on to the next. 



*/
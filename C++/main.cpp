#include <iostream>
#include <string>
#include <vector>
//#include "./Strings/LongestCommonPrefix.cc"
//#include "./2Pointers/MovesZeroes.cpp"
//#include "./2Pointers/ContainerWithMostWater.cpp"
//#include "./2Pointers/isSubsequence.cpp"
//#include "./2Pointers/maxNumberOfKSumParis.cpp"
//#include "./2Pointers/longestSubarrayOf1AfterRemoval.cpp"
#include "./2Pointers/maxConsecutive111.cpp"
using namespace std;


void print_int_vec(vector<int> & nums){
    std::cout<<"[ "; 
    for(u_int i = 0; i < nums.size()-1; i++){
        std::cout<< nums[i]<< ", "; 
    }
    std::cout<< nums[nums.size()-1]<<" ]"<<std::endl; 
}

int main(int argc, char* argv[]) {
    Solution solution;
    //string result = solution.longestCommonPrefixAttempt1(strs);
    
    // ### MovesZeroes 
        // vector<int> nums = {0,1,0,3,4,5};
        // solution.moveZeroes(nums); 
        // print_int_vec(nums); 

    // ### 11. Container With Most Water
        // vector<int> nums = {2,6,4,6,8,9,6,4,3}; // should get 30
        // std::cout<< solution.maxArea(nums); 

    // ### 392. Is Subsequence 
        // string t = "onetwothree";
        // string s = "ote";
        // std::cout<< solution.isSubsequence(s,t)<<endl; 

    // ### 1679. Max number of K-Sum Pairs !!!!!!!!! NOT TESTED 
        //vector<int> nums = {2,6,4,6,8,9,6,4,3}; 
        //solution.maxOperations(nums, 8); 
    
    // ### 1493. Longest Subarray After Deleting 1 Element
        //vector<int> nums = {1,1,0,1}; //3
        //std::cout<<solution.longestSubarray(nums)<<std::endl; 

    // ### 1004. Max Consecutive Ones 111
        vector<int> nums = {1,1,1,0,0,0,1,1,1,1,0}; 
        cout<<solution.longestOnes(nums, 2)<<endl; 
    return 0;
}
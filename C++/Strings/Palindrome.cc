#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    std::string longestPalindrome(string s) {

        // ok so this doesn't work if you have string in the middle to break up the palindrome 
        if (s.size() == 1) return s; 
        if(s.size() == 2 && s[0]!=s[1]) return std::string(1,s[0]);
        int left = 0; 
        int right = s.size()-1; 
        int start = 0; 
        int end = s.size()-1; 
        bool in_palindrome = false; 
        
        while(left<right){
            std::cout<< s[left]<< "  "<< s[right]<<std::endl; 
            if (s[left] != s[right] && right-left>0){
                in_palindrome = false; 
                if(s[right-1] == s[left]){
                    std::cout<<"here"<<std::endl;
                    right--; 
                }else if (s[left+1] == s[right]){
                    start++; 
                    left++; 
                } else {
                    start++; 
                    right--; 
                    left++; 
                }
            }else{
                if (!in_palindrome){
                    end = right; 
                    in_palindrome = true; 
                }
                left++; 
                right--; 
            } 
        }
        std::cout<< start<< " "<< end<<std::endl; 
        return s.substr(start,end-start+1);
    }
};

/*

we essentially need to know when the left side starts 

but how do we know which side to shift 




*/
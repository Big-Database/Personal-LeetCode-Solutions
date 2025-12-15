
#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;
class Solution {
public:

    string reverseVowel2(string s){
        int ptr1 = 0; 
        int ptr2 = s.size()-1; 
        std::unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'}; 

        while(ptr1 < ptr2){
            if(vowels.count(s[ptr1]) > 0 && vowels.count(s[ptr2])> 0){
                char temp = s[ptr1]; 
                s[ptr1] = s[ptr2]; 
                s[ptr2] = temp;
                ptr1++; 
                ptr2--;  
            }else if(vowels.count(s[ptr1]) > 0){
                ptr2--; 
            }else{
                ptr1++; 
            }
        }
        return s; 
    }


    string reverseVowels1(string s) {
        string reverse; 
        std::unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'}; 
        for (auto letter:s){
            if(vowels.count(letter) > 0){
                reverse += letter; 
            }
        }
        int k = 1; 
        for(int i=0; i < s.size(); ++i){
                if(vowels.count(s[i]) > 0){
                s[i] = reverse[reverse.size()-k]; 
                ++k; 
            }
        }
    return s; 
    }
};
#include <vector>
using namespace std;

class Solution {
public:
    /*
    Function: Writes the number of letters exist 
    Return: The new index to write at 
    */
    int write_to_array(vector<char>&chars, int length, int current_loc ){
        if(length == 1){
            return current_loc; 
        }
        int count = 0; 
        int temp = length; 
        while(temp > 0){
            temp = temp/10; 
            count++; 
        }        
        for(int i = count-1; i >= 0; --i){
            chars[current_loc+i] = '0'+ length%10; 
            length = length/10; 
        }
        return current_loc+count;
    }

    int compress(vector<char>& chars) {
        int length = 0; 
        int ptr1 = 0; 
        int ptr2 = 0; 
        while(ptr2 < chars.size()){
            if(chars[ptr1] == chars[ptr2]){
                ++length; 
                ++ptr2;
            }else{
                ptr1 = write_to_array(chars, length, ++ptr1); 
                chars[ptr1] = chars[ptr2];
                length = 1;  
                ++ptr2; 
            }
        }
        ptr1 = write_to_array(chars,length,++ptr1); 

        return ptr1;
    }
};

void test() {
    Solution s;
    vector<char> c1 = {'a','a','b','b','c','c','c'};
    cout << s.compress(c1) << "\n"; // expected: 6  (a2b2c3)
    vector<char> c2 = {'a'};
    cout << s.compress(c2) << "\n"; // expected: 1
    vector<char> c3 = {'a','b','b','b','b','b','b','b','b','b','b','b','b'};
    cout << s.compress(c3) << "\n"; // expected: 4  (ab12)
}
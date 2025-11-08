#include <string>
#include <vector>
using namespace std;

class Solution {
public:

  string longestCommonPrefixAttempt2(vector <string> & strs){
      if (strs[0].empty()) return ""; 

      string prefix = strs[0]; 
      for(u_int i = 1; i < strs.size(); ++i ){
          while(strs[i].compare(0, prefix.size(), prefix) != 0){
              prefix.pop_back(); 
          }
      }
      return prefix; 
  }

  string longestCommonPrefixAttempt1(vector<string>& strs) {
      if (strs.empty()) return ""; 
      if (strs[0].empty()) return ""; 

      std::string prefix; 
      char current = strs[0][0]; // first character 
      int i = 0; 
      
      while(i < strs[0].length()){ // loop throught the array 
          bool found = true; 
          for (std::string word: strs){ // loop through the characters
              if (current != word[i]){
                  found = false; 
                  break;
              } // break if current character is not the same as the first character of the next word 
          }
          if(!found) break;
          i++; // increment counter
          prefix += current; // we add on to the current prefix
          current = strs[0][i]; // current moves on to the next character
      }
      return prefix;
  }
};


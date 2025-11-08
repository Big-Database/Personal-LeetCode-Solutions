#include <string>
#include <vector>
using namespace std;

class Solution {
public:
  int longestCommonPrefixAfterAtLeastOneRemovalAttempt1(string s, string t) {
    /*
        Ok so we need to somehow compare the two strings and figure out how many characters are the same, 
        where we can remove a singular character from s

        string1 
        string 

        S: brro
        t: bro

        b we add the first character 
        br add the second 
        now we have a difference, allow one skip, question is which one to skip? 


        S: 1bro 
        t: bro 

        essentially we'll only allow one skip 
    */
        int i = 0; 
        int skip_count=0; 
        int prefix_count= 0; 
        for(char c: s){
            if (c == t[i]){
                prefix_count++; 
            }else if(!skip_count) {
                skip_count++; 
                continue;
            } else{
                break; 
            }
            ++i;
        }
        return prefix_count;
    }



  int longestCommonPrefixAfterAtLeastOneRemovalAttempt2(string s, string t) {
    /*
      The faster one on leetcode, because it doesn't have the overhead of for(char c: s)

      and has a more predictable branching .. potentially. according to GPT-5
    */
        int m = s.size();
        int n = t.size();
        int ans = 0;
        int i = 0, j = 0;
        bool used = false;
        while (i < m && j < n) {
            if (s[i] == t[j]) {
                ans++;
                i++;
                j++;
            } else if (!used) {
                i++;
                used = true;
            } else {
                return ans;
            }
        }
        return ans;
    }
};

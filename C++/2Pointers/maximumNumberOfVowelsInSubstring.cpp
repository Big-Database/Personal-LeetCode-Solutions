#include <string>
using namespace std;

class Solution {
public:
    int maxVowels(string s, int k) {
        // TODO: not yet implemented
        return -1;
    }
};

void test() {
    Solution s;
    cout << s.maxVowels("abciiidef", 3) << "\n"; // expected: 3
    cout << s.maxVowels("aeiou", 2) << "\n";      // expected: 2
}
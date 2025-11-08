#include <iostream>
#include <string>
#include <vector>
#include "./Strings/LongestCommonPrefix.cc"
using namespace std;

int main(int argc, char* argv[]) {
    vector<string> strs = {"flower", "flow", "flight"};
    Solution solution;
    string result = solution.longestCommonPrefix(strs);
    cout << "Longest Common Prefix: " << result << endl;
    return 0;
}
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void print_int_vec(vector<int>& nums) {
    cout << "[ ";
    for (size_t i = 0; i < nums.size() - 1; i++)
        cout << nums[i] << ", ";
    cout << nums[nums.size() - 1] << " ]\n";
}

#ifdef PROBLEM_INCLUDE
#include PROBLEM_INCLUDE
#else
#error "Specify a problem: make run FILE=path/to/problem.cpp"
#endif

int main() {
    test();
    return 0;
}

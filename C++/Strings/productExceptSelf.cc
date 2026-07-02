#include <vector>
using namespace std; 

class Solution {
public:
    // this would be a greate solution if there were no zeros in the array
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1; 
        for(int i = 0; i< nums.size(); ++i){
            product *= nums[i]; 
        }
        std::vector<int> products;
        for(int i = 0; i< nums.size(); ++i){
            products.emplace_back(product/nums[i]); 
        }
        return products; 
    }

};

void test() {
    Solution s;
    vector<int> n1 = {1,2,3,4};
    auto r1 = s.productExceptSelf(n1);
    print_int_vec(r1); // expected: [ 24, 12, 8, 6 ]
}

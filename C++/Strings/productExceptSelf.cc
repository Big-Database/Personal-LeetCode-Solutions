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

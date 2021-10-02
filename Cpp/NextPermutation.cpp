//given : input as a vector
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       //using direct STL library functions
       std::next_permutation(nums.begin(),nums.end()); 
      
    }
};

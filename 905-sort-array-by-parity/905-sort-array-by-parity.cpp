class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
    sort(nums.begin(), nums.end(), [](int lhs, int rhs) { return lhs % 2 == 0 && rhs % 2 == 1;});    
    return nums;
}
};
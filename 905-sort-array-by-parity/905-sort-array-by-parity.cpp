class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int a=0;
        int idx=0;
        while(idx<nums.size()){
            if(nums[idx]%2==0){swap(nums[a],nums[idx]);a++;idx++;}
            else idx++;
        }
        return nums;
    }
};
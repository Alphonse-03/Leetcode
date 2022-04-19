class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int i=n-1;
        for(i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])break;
        }
        if(i<0)reverse(nums.begin(),nums.end());
        else
        {
            int x=n-1;
            for(;x>=0;x--)
            {
                if(nums[x]>nums[i])break;
            }
            swap(nums[x],nums[i]);
            reverse(nums.begin()+i+1,nums.end());
        }
    }
};
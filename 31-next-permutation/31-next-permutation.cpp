class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int end=nums.size()-2,l=end+1;
        for(;end>=0;end--)
        {
            if(nums[end]<nums[end+1])break;
        }
        if(end<0)
        {
            reverse(nums.begin(),nums.end());
        }
        else
        {
            for(;l>end;l--)
            {
                if(nums[l]>nums[end])break;
            }
            swap(nums[end], nums[l]);
    	    reverse(nums.begin() + end + 1, nums.end());
            //reverse(nums.begin()+end,nums.begin()+l-1);
        }
}};
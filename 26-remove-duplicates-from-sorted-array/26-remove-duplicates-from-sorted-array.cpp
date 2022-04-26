class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int idx=0;
        int s=1;
        while(s<nums.size())
        {
            int i=upper_bound(nums.begin()+s,nums.end(),nums[idx])-nums.begin();
            if(i==nums.size())return ++idx;
            nums[++idx]=nums[i];
        }
        return ++idx;
    }
};
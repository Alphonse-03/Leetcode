class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int idx=0;
        while(true)
        {
            int i=upper_bound(nums.begin(),nums.end(),nums[idx])-nums.begin();
            if(i==nums.size())return ++idx;
            nums[++idx]=nums[i];
        }
        return ++idx;
    }
};
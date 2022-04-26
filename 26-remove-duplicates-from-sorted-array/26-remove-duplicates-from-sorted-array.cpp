class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int idx=0;
        for(int i=1;i<nums.size();i++)
        {
            while(i<nums.size() && nums[i]==nums[idx])i++;
            if(i==nums.size())return ++idx;
            nums[++idx]=nums[i];
        }
        return ++idx;
    }
};
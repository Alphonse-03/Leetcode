class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<=2)return nums.size();
        vector<int> ans;
        ans.push_back(nums[0]);
        ans.push_back(nums[1]);
        for(int i=2;i<nums.size();i++)
        {
            if(nums[i]!=nums[i-2])
            {
                ans.push_back(nums[i]);
            }
        }
        for(int i=0;i<ans.size();i++)
        {
            nums[i]=ans[i];
        }
        return ans.size();
    }
};
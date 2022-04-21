class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow=nums[0];
        int fast=nums[slow];
        while(slow!=fast)
        {
            slow=nums[slow];
            fast=nums[nums[fast]];
        }
        slow=0;
        while(slow!=fast)
        {
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
    }
};
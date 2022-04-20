class Solution {
public:
    void sortColors(vector<int>& nums) {
        int s=0;
        int p=0;
        while(p<nums.size())
        {
            if(nums[p]==0)
            {
                swap(nums[p],nums[s]);
                s++;
            }
            p++;
        }
        p=nums.size()-1;
        int e=p;
        while(p>=0 && nums[p]!=0)
        {
            if(nums[p]==2)
            {
                swap(nums[p],nums[e]);
                e--;
            }
            p--;
        }
        
        
    }
};
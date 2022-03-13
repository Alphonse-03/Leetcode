class Solution {
public:
    int maximumTop(vector<int>& nums, int k) {
        //if(k==0)return nums[0];
        if(nums.size()==1 && k%2!=0)return -1;
        if(nums.size()==1 && k%2==0)return nums[0];
        
        int n=nums.size();
        if(k>nums.size())
        {
            int mx=0;
            for(auto &i:nums)
            {
                mx=max(i,mx);
            }
            return mx;
        }
        else
        {
            int mx=0;
            for(int i=0;i<k-1;i++)
            {
                mx=max(mx,nums[i]);
            }
            return max(mx,nums[k]);
            
        }
    }
};
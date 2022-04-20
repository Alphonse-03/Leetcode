class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       
        for(int i=0;i<nums.size();i++)
        {
            int x=target-nums[i];
            int s=i+1;
            int e=nums.size()-1;
            while(s<=e)
            {
                int mid=s+(e-s)/2;
                if(nums[mid]==x)return {i+1,mid+1};
                if(nums[mid]<x)s=mid+1;
                else e=mid-1;
            }
        }
        return {-1};
    }
};
class Solution {
public:
    
    int bs(int s,int e,vector<int>& nums,int target,int f)
    {
        if(s>e)return f;
        int mid=s+(e-s)/2;
        if(nums[mid]==target)
        {
            f=mid;
            return bs(s,mid-1,nums,target,f);
        }
        else if(nums[mid]>target)
        {
            return bs(s,mid-1,nums,target,f);
        }
        else
        {
            return bs(mid+1,e,nums,target,f);
        }
        return f;
    }
    
    int bs2(int s,int e,vector<int>& nums,int target,int f)
    {
        if(s>e)return f;
        int mid=s+(e-s)/2;
        if(nums[mid]==target)
        {
            f=mid;
            return bs2(mid+1,e,nums,target,f);
        }
        else if(nums[mid]>target)
        {
            return bs2(s,mid-1,nums,target,f);
        }
        else
        {
            return bs2(mid+1,e,nums,target,f);
        }
        return f;
    }
    
    
    
    
    vector<int> searchRange(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        int f,l;
        f=bs(start,end,nums,target,-1);
        l=bs2(start,end,nums,target,-1);
        return {f,l};
    }
};
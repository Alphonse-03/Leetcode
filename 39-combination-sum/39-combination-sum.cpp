class Solution {
public:
    
    void helper(vector<int>& nums,int t,int i,vector<int>& temp,vector<vector<int>>& ans)
    {
        if(t==0)
        {
            ans.push_back(temp);
            return;
        }
        if(t<0 || i>nums.size()-1)return;
        for(int j=i;j<nums.size();j++)
        {
            if(nums[j]<=t)
            {
                temp.push_back(nums[j]);
                helper(nums,t-nums[j],j,temp,ans);
               // helper(nums,t-nums[j],j+1,temp,ans);
                temp.pop_back();
            }
         //   helper(nums,t,j+1,temp,ans);
        }
        
    }
    
    
    
    
    
    vector<vector<int>> combinationSum(vector<int>& nums, int t) {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(nums.begin(),nums.end());
        helper(nums,t,0,temp,ans);
        return ans;
    }
};
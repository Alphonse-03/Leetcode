class Solution {
public:
    void helper(vector<int>& nums,int t,int curr,int i,vector<int>& temp,vector<vector<int>>& ans)
    {
        if(curr>t)return;
        if(t==curr)
        {
            
            ans.push_back(temp);
              
            return ;
        }
        if(i>=nums.size())return;
        for(int j=i;j<nums.size();j++)
        {
            if(j && nums[j]==nums[j-1] && j>i)continue;
            temp.push_back(nums[j]);
            helper(nums,t,curr+nums[j],j+1,temp,ans);
            temp.pop_back();
        }
    }
    
    
    
    
    vector<vector<int>> combinationSum2(vector<int>& nums, int t) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
      
        vector<int> temp;
        helper(nums,t,0,0,temp,ans);
        

        return ans;
    }
};
class Solution {
public:
    
    void helper(vector<int>& nums,int t,int i,int curr,set<vector<int>>& ans,vector<int>& temp)
    {
        if(curr>t || i>=nums.size())return;
        if(curr==t)
        {
            sort(temp.begin(),temp.end());
            ans.insert(temp);
            return ;
        }
        if(curr+nums[i]<=t)
        {
          //  helper(nums,t,i+1,curr,ans,temp);
            temp.push_back(nums[i]);
            helper(nums,t,i+1,curr+nums[i],ans,temp);
            
            helper(nums,t,i,curr+nums[i],ans,temp);
            temp.pop_back();
            helper(nums,t,i+1,curr,ans,temp);
           
            
        }
        else
        {
            helper(nums,t,i+1,curr,ans,temp);
        }
        
        // temp.push_back(nums[i]);
        // helper(nums,t,i,curr+nums[i],ans,temp);
        // temp.pop_back();
        // helper(nums,t,i+1,curr,ans,temp);
    }
    
    
    
    
    vector<vector<int>> combinationSum(vector<int>& nums, int t) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        set<vector<int>> st;
        vector<int> temp;
        helper(nums,t,0,0,st,temp);
        for(auto &i:st)
        {
            ans.push_back(i);
        }
        return ans;
      
    }
};
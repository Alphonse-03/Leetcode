class Solution {
public:
    
    void helper(vector<int>& nums,vector<vector<int>>& ans,int i,vector<int>& temp)
    {
        if(i>=nums.size())return;
        
        helper(nums,ans,i+1,temp);
        temp.push_back(nums[i]);
        helper(nums,ans,i+1,temp);
        ans.push_back(temp);
        temp.pop_back();   
    }
    
    
    
    
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int> temp;
        ans.push_back(temp);
        helper(nums,ans,0,temp);
        
        return ans;
    }
};
class Solution {
public:
    
    void helper(vector<vector<int>>& ans,vector<int>& nums,int i,vector<int>& t){
       if(i==nums.size()){ ans.push_back(t);return;}
       // if(i>=nums.size())return ;
       
        t.push_back(nums[i]);
        helper(ans,nums,i+1,t);
        t.pop_back();
        helper(ans,nums,i+1,t);
        
    }
    
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> t;
        helper(ans,nums,0,t);
        return ans;
    }
};
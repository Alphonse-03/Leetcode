class Solution {
public:
    //flag is false we are looking for a higher value
    int dp[1000][2][1002];
    int helper(vector<int>& nums,int i,bool flag,int prev){
        if(i==nums.size())return 0;
        if(dp[i][flag][prev]!=-1)return dp[i][flag][prev];
        if(!flag){
           if(prev<nums[i]){
               return dp[i][flag][prev]=max(1+helper(nums,i+1,true,nums[i]),helper(nums,i+1,flag,prev));
           }
            else{
                return dp[i][flag][prev]=helper(nums,i+1,flag,prev);
            }
           
        }
        else{
            if(prev>nums[i]){
               return dp[i][flag][prev]=max(1+helper(nums,i+1,false,nums[i]),helper(nums,i+1,flag,prev));
           }
            else{
                return dp[i][flag][prev]=helper(nums,i+1,flag,prev);
            }
        }
        
    }
    
    
    
    
    
    int wiggleMaxLength(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return max(helper(nums,0,false,0),helper(nums,0,true,1001));
    }
};
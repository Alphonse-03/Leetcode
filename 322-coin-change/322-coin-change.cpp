class Solution {
public:
    int dp[13][10001];
    int helper(vector<int>& coins,int amount,int i){
        if(amount==0)return 0;
        if(i==coins.size() || amount<0)return 100000;
        if(dp[i][amount]!=-1)return dp[i][amount];
       
            return dp[i][amount]=min({1+helper(coins,amount-coins[i],i),helper(coins,amount,i+1)});
        
        
    }
    
    
    int coinChange(vector<int>& coins, int amount) {
        memset(dp,-1,sizeof(dp));
        int x=helper(coins,amount,0);
        return x==100000?-1:x;
    }
};
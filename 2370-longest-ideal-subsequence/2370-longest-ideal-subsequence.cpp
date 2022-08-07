class Solution {
public:
    //int dp[100000][200];
    int helper(int i,string &str,int k,char ch,vector<vector<int>>& dp){
        if(i==str.size())return 0;
        if(dp[i][ch-'0']!=-1)return dp[i][ch-'0'];
        if(abs(str[i]-ch)<=k || ch=='0'){
            return dp[i][ch-'0']=max(1+helper(i+1,str,k,str[i],dp),helper(i+1,str,k,ch,dp));
        }
        else{
            return dp[i][ch-'0']=helper(i+1,str,k,ch,dp);
        }
    }
    
    
    
    
    
    int longestIdealString(string s, int k) {
        int n=s.size();
        vector<vector<int>> dp(n,vector<int>(100,-1));
       // memset(dp,-1,sizeof(dp));
        return helper(0,s,k,'0',dp);
    }
};
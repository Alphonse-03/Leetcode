class Solution {
public:
    
    int dp[101][101][601];
    
    pair<int,int> freq(string &str){
        int z=0;
        int o=0;
        for(auto &i:str){
            if(i=='1')o++;
            else z++;
        }
        return {z,o};
    }
    
    
    int helper(vector<string>& strs,int m,int n,int i){
        if(i==strs.size())return 0;
        auto x=freq(strs[i]);
        if(dp[m][n][i]!=-1)return dp[m][n][i];
        
        if(x.first<=m && x.second<=n){
            return dp[m][n][i]=max(1+helper(strs,m-x.first,n-x.second,i+1),helper(strs,m,n,i+1));
        }
        else return dp[m][n][i]=helper(strs,m,n,i+1);
        
        
    }
    
    
    
    int findMaxForm(vector<string>& strs, int m, int n) {
        memset(dp,-1,sizeof(dp));
        return helper(strs,m,n,0);
    }
};
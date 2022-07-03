class Solution {
public:
    long long dp[100002];
    
    long long helper(vector<vector<int>>& questions,int i){
        if(i>=questions.size()||i<0) return 0;
        if(dp[i]!=-1)return dp[i];
        return dp[i]=max(questions[i][0]+helper(questions,i+questions[i][1]+1),helper(questions,i+1));
    }
    
    
    
    
    
    long long mostPoints(vector<vector<int>>& questions) {
        memset(dp,-1,sizeof(dp));
        return helper(questions,0);
    }
};
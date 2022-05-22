class Solution {
public:
    int countSubstrings(string s) {
        int size=s.size();
        int count=0;
        vector<vector<bool>> dp(size,vector<bool>(size,false));
        for(int g=0;g<size;g++){
            for(int i=0,j=g;j<size;j++,i++){
                if(g==0){
                    dp[i][j]=true;
                }
                else if(g==1){
                    if(s[i]==s[j]){
                        dp[i][j]=true;
                    }
                    else{
                        dp[i][j]=false;
                    }
                }
            
                else{
                    if(s[i]==s[j] && dp[i+1][j-1]==1){
                        dp[i][j]=true;
                    }
                    else{
                        dp[i][j]=false;
                    }
                }
                if(dp[i][j])count++;
            }
        }
        
        
       
        return count;
        
        
    }
};
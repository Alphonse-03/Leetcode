class Solution {
public:
//     bool isInterleave(string str1, string str2, string str3) {
//         int s1=str1.size();
//         int s2=str2.size();
//         int s3=str3.size();
//         vector<vector<int>> dp(s3+1,vector<int>(s1+1));
//         for(int i=1;i<=s3;i++){
//             for(int j=1;j<=s1;j++){
//                 if(str3[i]==str1[j]){
//                     dp[i][j]=dp[i-1][j-1]+1;
//                 }
//                 else{
//                     dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
//                 }
//             }
//         }
//         string lcs1="";
//         int x=s3;
//         int y=s1;
//         while(x>0 && y>0){
//             if(str3[x-1]==str1[y-1]){
//                 lcs1.push_back(str1[y-1]);
//                 x--;
//                 y--;
//             }
//             else{
//                 if(dp[x-1][y]<dp[x][y-1]){
//                     y--;
//                 }
//                 else{
//                     x--;
//                 }
//             }
//         }
//         reverse(lcs1.begin(),lcs1.end());
//         string newstr="";
//         int idx=0;
        
        
//         for(auto &i:str3){
//             if(i!=lcs1[idx]){
//                 newstr.push_back(i);
//             }
//             else{
//                 idx++;
//             }
//         }
//         cout<<newstr;
//         return newstr==str2;

//     }
    bool isInterleave(string s1, string s2, string s3) 
    {    
        int n1=s1.length();
        int n2=s2.length();
        int n3=s3.length();
        
        vector<vector<bool>> d(n1+1,vector<bool>(n2+1));
        
        if(n1+n2!=n3)
            return false;
        
        for(int i=0;i<=n1;i++)
        {
            for(int j=0;j<=n2;j++)
            {
                if(i==0 && j==0)
                    d[i][j]=true;
                else if(i==0)
                {
                    d[i][j]=d[i][j-1] && s2[j-1]==s3[i+j-1];
                }
                
                else if(j==0)
                {
                    d[i][j]=d[i-1][j] && s1[i-1]==s3[i+j-1];
                }
                
                else
                {
                    d[i][j]= (d[i][j-1] && s2[j-1]==s3[i+j-1]) || (d[i-1][j] && s1[i-1]==s3[i+j-1]);
                }
            }
        }
        
       
        return d[n1][n2];
    }
};
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
	int mod=1000000007;
	int dp[10001];
	    int helper(string &str,int i)
	    {
	        if(i>=str.size())return 1;
	        if(str[0]=='0')return 0;
	        if(dp[i]!=-1)return dp[i];
	        if(str[i]=='0' && str[i-1]-'0'>2)return 0;
	        int w1=0;
	        if(str[i]!='0')w1=helper(str,i+1)%mod;
	        int w2=0;
	        if(str[i]-'0'<=2 && str[i]!='0' && i<str.size()-1)
	        {
	            if(str[i]=='2')
	            {
	                if(str[i+1]-'0'<=6)
	                {
	                    w2+=helper(str,i+2)%mod;
	                }
	            }
	            else
	            {
	                w2+=helper(str,i+2)%mod;
	            }
	            
	             
	        }
	        return dp[i]=(w1+w2)%mod;
	       
	    }
	
	
	
		int CountWays(string str){
		    // Code here
		    memset(dp,-1,sizeof(dp));
		    return helper(str,0);
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.CountWays(str);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends
class Solution {
public:
    int lcs(string &s1,string &s2,int j,int i)
    {
        if(i==0)return 1;
        if(j==0)return 0;
        if(s1[j-1]==s2[i-1])
        {
            return lcs(s1,s2,j-1,i-1);
        }
        else
        {
            return lcs(s1,s2,j-1,i);
        }
        
    }
    
    int numMatchingSubseq(string s, vector<string>& words) {
        
        int counter=0;
        unordered_map<string,int> mp;
        for(auto i: words)
        {
            if(mp.find(i)==mp.end())
            {
                int x=lcs(s,i,s.size(),i.size());
                mp[i]=x;
            }
            else
            {
                if(mp[i]!=0)mp[i]++;
            }
        
        }
        for(auto i:mp)
        {
            counter+=i.second;
        }
        return counter;
    }
};





// int a=s.size();
//         int b=ii.size();
//         int dp[a+1][b+1];
//         for(int i=0;i<=a;i++)
//         {
//             dp[i][0]=0;
//         }
//         for(int i=0;i<=b;i++)
//         {
//             dp[0][i]=0;
//         }
        
//         for(int i=1;i<=a;i++)
//         {
//             for(int j=1;j<=b;j++)
//             {
//                 if(s[i-1]==ii[j-1])
//                 {
//                     dp[i][j]=1+dp[i-1][j-1];
//                 }
//                 else
//                 {
//                     dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
//                 }
//             }
//         }
//         return dp[a][b]==b;
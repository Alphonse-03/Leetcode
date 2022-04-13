class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n,vector<int>(n));
        int k=0;
        int x=1;
        while(x<=n*n)
        {
        for(int i=k;i<n-k;i++)
        {
            ans[k][i]=x;
            x++;
        }
        for(int i=k;i<n-k;i++)
        {
            if(ans[i][n-k-1]!=0)continue;
            ans[i][n-k-1]=x;
            x++;
        }
        for(int i=n-k-1;i>=0;i--)
        {
            if(ans[n-k-1][i]!=0)continue;
            ans[n-k-1][i]=x;
            x++;
        }
        for(int i=n-k-1;i>=0;i--)
        {
            if(ans[i][k]!=0)continue;
            ans[i][k]=x;
            x++;
        }
        k++;
   }
        return ans;
    }
};
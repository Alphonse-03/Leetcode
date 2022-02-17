int helper(string &ref,string &s,int k,int ans)
{
    if(s==ref)return ans;
    int i;
    for(i=k-1;i>=0;i--)
    {
        if(s[i]!=ref[i])
        {
            int j=i;
            while(s[i]!=ref[j])
            {
                j--;
            }
            ans+=i-j;
            for(int k=j;k<i;k++)
            {
                swap(ref[k],ref[k+1]);
            }
            return helper(ref,s,k,ans);
        }
    }
    return -1;
    
}




class Solution {
public:
    int getMinSwaps(string s, int k) {
        string ref=s;
        while(k--)
        {
            next_permutation(s.begin(),s.end());
        }
        int n=s.size();
        return helper(ref,s,n,0);
    }
};

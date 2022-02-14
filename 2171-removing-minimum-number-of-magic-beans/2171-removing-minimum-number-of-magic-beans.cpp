typedef long long ll;
class Solution {
public:
    long long minimumRemoval(vector<int>& beans) {
        sort(beans.begin(),beans.end());
        int n=beans.size();
        vector<ll> sum(n);
        sum[0]=beans[0];
        for(int i=1;i<n;i++)
        {
            sum[i]=sum[i-1]+beans[i];
        }
        ll ans=1e18;
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                ans=min(ans,sum[n-1]-sum[i]-(ll)beans[i]*(n-1-i));
            }
            else
            {
                ans=min(ans,sum[i-1]+sum[n-1]-sum[i]-(ll)beans[i]*(n-1-i));
            }
        }
        return ans;
    }
};
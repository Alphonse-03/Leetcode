typedef long long ll;
class Solution {
public:
    int maxSumMinProduct(vector<int>& nums) {
        int n=nums.size();
        vector<ll> pref(n+1,0);
        for(int i=0;i<nums.size();i++)
        {
            pref[i+1]=pref[i]+nums[i];
        }
   
        stack<int> st;
        vector<int> right(n,n);
        for(int i=0;i<nums.size();i++)
        {
            while(!st.empty() && nums[st.top()]>nums[i])
            {
                right[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
    
        vector<int> left(n,-1);
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && nums[st.top()]>nums[i])
            {
                left[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
       // left[0]=-1;
        // for(int i=0;i<n;i++)
        // {
        //     if(left[i]==0)left[i]=-1;
        // }
//         for(auto &i:left)
//         {
//             cout<<i<<" ";
//         }
//         cout<<endl;
//          for(auto &i:right)
//         {
//             cout<<i<<" ";
//         }
//         cout<<endl;
//          for(auto &i:pref)
//         {
//             cout<<i<<" ";
//         }
        
        long long ans=0;
        long long mod=1e9+7;
        for(int i=0;i<n;i++)
        {

            ll t=(nums[i]*(pref[right[i]]-pref[left[i]+1] ));
            ans=max(ans,t);
        }
        
        
        return ans%mod;
    }
};
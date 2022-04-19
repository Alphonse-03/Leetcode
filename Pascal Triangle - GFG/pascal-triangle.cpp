// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

 // } Driver Code Ends
 #define ll long long 
 #define mod 1000000007
 
class Solution{
public:

    vector<ll> helper(int n,vector<ll>& ans)
    {
        if(n==0)return ans;
        vector<ll> t={1};
        for(int i=0;i<ans.size()-1;i++)
        {
            t.push_back((ans[i]+ans[i+1])%mod);
        }
        t.push_back(1);
        return helper(n-1,t);
    }




    vector<ll> nthRowOfPascalTriangle(int n) {
        vector<ll> ans{1};
        return helper(n-1,ans);
        
    }
};


// { Driver Code Starts.


void printAns(vector<ll> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}
  // } Driver Code Ends
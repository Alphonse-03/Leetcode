// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        // Code here
        int s=0;
        int e=n-1;
        while(s<e)
        {
            int mid=s+(e-s)/2;
            if(mid>0 && arr[mid]==x && arr[mid-1]!=x)
            {
                s=mid;
                break;
            }
            if(arr[mid]>=x)
            {
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
        }
        if(arr[s]!=x)return {-1};
        int a=s;
        e=n-1;
        s=0;
        int res=0;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(arr[mid]<x)
            {
                s=mid+1;
            }
            else if(arr[mid]>x)
            {
                e=mid-1;
            }
            else
            {
                res=mid;
                s=mid+1;
            }
        }
        return {a,res};
        
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> ans= obj.firstAndLast(arr, n, x) ;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<< endl;
    }
    return 0;
}
  // } Driver Code Ends
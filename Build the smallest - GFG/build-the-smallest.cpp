// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string buildLowestNumber(string num, int k);
// Driver program to test above function
int main()
{
    int t,n;
    string str;
    cin>>t;
    while(t--)
    {
    cin>>n;
    cin>>str;
    cout << buildLowestNumber(str, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends


string buildLowestNumber(string num, int k)
{
    //code here.
     string ans="";
        for(auto &i:num)
        {
            while(ans.size() && ans.back()>i && k)
            {
                ans.pop_back();
                k--;
            }
            if(ans.size() || i!='0')ans.push_back(i);
        }
        while(k-- && ans.size())ans.pop_back();
        return ans.size()?ans:"0";
    
}
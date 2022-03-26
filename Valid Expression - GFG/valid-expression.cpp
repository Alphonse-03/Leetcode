// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
bool valid(string str);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<valid(str)<<endl;
    }
    return 0;
}// } Driver Code Ends


bool valid(string s)
{
    // code here
    stack<char> st;
    int i=0;
    while(i<s.size())
    {
        if(st.empty())st.push(s[i]);
        else if(s[i]==')')
        {
            if(st.top()!='(')return false;
            else st.pop();
        }
        else if(s[i]==']')
        {
            if(st.top()!='[')return false;
            else st.pop();
        }
        else if(s[i]=='}')
        {
            if(st.top()!='{')return false;
            else st.pop();
        }
        else st.push(s[i]);
        i++;
    }
    if(st.empty())return true;
    return false;
}
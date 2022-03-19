// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


 // } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    public:
     void helper(int ope,int clo,int tot,vector<string>& ans,string& temp)
    {
        if(ope==tot && clo==tot)
        {ans.push_back(temp);
            return;
        }
        if(ope<tot)
        {
            temp.push_back('(');
            helper(ope+1,clo,tot,ans,temp);
            temp.pop_back();
        }
            if(clo<ope)
            {
                temp.push_back(')');
                helper(ope,clo+1,tot,ans,temp);
                temp.pop_back();
            }   
    }
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        vector<string> ans;
        string temp="";
        helper(0,0,n,ans,temp);
        return ans;
    }
};

// { Driver Code Starts.


int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 
  // } Driver Code Ends
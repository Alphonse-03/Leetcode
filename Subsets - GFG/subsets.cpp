// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
     void helper(vector<int>& nums,vector<vector<int>>& ans,int i,vector<int>& temp)
    {
        if(i>=nums.size())return;
        
        helper(nums,ans,i+1,temp);
        temp.push_back(nums[i]);
        helper(nums,ans,i+1,temp);
        ans.push_back(temp);
        temp.pop_back();   
    }
    
    
    vector<vector<int> > subsets(vector<int>& A)
    {
        vector<vector<int>>ans;
        vector<int> temp;
        ans.push_back(temp);
        helper(A,ans,0,temp);
        sort(ans.begin(),ans.end());
        
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, x;
		cin >> n;

		vector<int> array;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			array.push_back(x);
		}
        
        
        Solution ob;
		vector<vector<int> > res = ob.subsets(array);

		// Print result
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << endl;
		}

		
	}

	return 0;
}  // } Driver Code Ends
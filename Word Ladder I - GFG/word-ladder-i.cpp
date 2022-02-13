// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    int wordLadderLength(string start, string end, vector<string>& list) {
        // Code here
        set<string> st(list.begin(),list.end());
        queue<string> qu;
        qu.push(start);
        int ans=0;
        if(st.find(end)==st.end())return 0;
        while(!qu.empty())
        {
            ans++;
            int n=qu.size();
            while(n--)
            {
                auto back=qu.front();
                qu.pop();
                string curr=back;
                for(int i=0;i<back.size();i++)
                {
                    char x=back[i];
                    for(int j=0;j<26;j++)
                    {
                        if(j!=x-'a')
                        {
                            back[i]=j+'a';
                            if(back==end)return ans+1;
                            if(st.find(back)!=st.end())
                            {
                                qu.push(back);
                                st.erase(back);
                            }
                        }
                    }
                    back=curr;
                }
            }
        }
        return 0;
    }
    
    

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<string>wordList(n);
		for(int i = 0; i < n; i++)cin >> wordList[i];
		string startWord, targetWord;
		cin >> startWord >> targetWord;
		Solution obj;
		int ans = obj.wordLadderLength(startWord, targetWord, wordList);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends
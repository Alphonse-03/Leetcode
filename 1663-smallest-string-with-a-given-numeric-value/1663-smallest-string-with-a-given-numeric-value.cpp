class Solution {
public:
    string getSmallestString(int n, int k) {
        if(n==1)return to_string('a'+(k-1));
        string ans="";
        for(int i=1;i<=n;i++)
        {
            if(i==n)
            {
                ans.push_back('a'+(k-1));
                return ans;
            }
            if((k-1)/(n-i)<26)
            {
                ans.push_back('a');
                k--;
            }
            else
            {
                int spots=n-i+1;
                k-=(spots-1)*26;
                ans.push_back('a'+(k-1));
                spots--;
                while(spots--)
                {
                    ans.push_back('z');
                }
                return ans;
            }
            
        }
        
        
        
        return ans;
    }
};
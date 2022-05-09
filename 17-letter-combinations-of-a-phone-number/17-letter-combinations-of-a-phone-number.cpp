class Solution {
public:
    
    void helper(string& digits,vector<string> &ans,vector<string> &com,int i)
    {
        if(i==digits.size())return ;
        if(ans.size()==0)
        {
            string curr=com[digits[i]-'0'];
            for(auto i:curr)
            {
                string s="";
                s+=i;
                ans.push_back(s);
                s="";
            }
        }
        else
        {
             string curr=com[digits[i]-'0'];
            int size=ans.size();
             for(int i=0;i<size;i++)
             {
                 ans[i]=ans[i]+curr[0];
             }
            
            for(int i=1;i<curr.size();i++)
            {
                for(int j=0;j<size;j++)
                {
                    string s=ans[j].substr(0,ans[j].size()-1);
                    s+=curr[i];
                    ans.push_back(s);
                }
            }
        }
        helper(digits,ans,com,i+1);
    }
    
    
    
    vector<string> letterCombinations(string digits) {
        
        vector<string> com{"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        
        
        vector<string> ans;
        
        helper(digits,ans,com,0);
        return ans;
        
    }
};
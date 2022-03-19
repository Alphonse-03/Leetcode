class Solution {
public:
    
    void helper(int ope,int clo,int tot,vector<string>& ans,string& temp)
    {
        if(ope==tot && clo==tot)
        {ans.push_back(temp);
            return;
        }
       
//         if(ope<=tot)
//         {
//             temp.push_back('(');
//             helper(ope+1,clo,tot,ans,temp);
//             temp.pop_back();
//             helper(ope,clo,tot,ans,temp);
//         }
        
//         if(clo<=ope)
//         {
//             temp.push_back(')');
//             helper(ope,clo+1,tot,ans,temp);
//             temp.pop_back();
//             helper(ope,clo,tot,ans,temp);
//         }
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
        
       // if(temp.size())temp.pop_back();
    }
    
    
    
    vector<string> generateParenthesis(int n) {
       vector<string> ans;
        string temp="";
        helper(0,0,n,ans,temp);
        return ans;
    }
};
class Solution {
public:
    bool isPalin(string & str)
    {
        int s=0;
        int e=str.size()-1;
        while(s<e)
        {
            if(str[s]!=str[e])return false;
            s++;
            e--;
        }
        return true;
    }
    string breakPalindrome(string palindrome) {
        string ans=palindrome;
        int end=ans.size()-1;
        for(int i=0;i<ans.size();i++)
        {
            if(i!=ans.size()-1)ans[i]='a';
            else if(ans[i]=='a')
            {
                if(ans[end]=='a')ans[end]='b';
                else ans[end]='a';
                end--;
            }
            if(isPalin(ans)==false)return ans;
            ans[i]=palindrome[i];
        }
        return "";
    }
};
class Solution {
public:
    string longestPalindrome(string s) {
        int ans=0;
        string str="";
        for(int i=0;i<s.size();i++)
        {
            int j=i-1;
            int k=i+1;
            int len=1;
            while(j>=0 && k<s.size() && s[j]==s[k])
            {
                j--;
                k++;
                len+=2;
            }
            if(len>ans)
            {
                ans=len;
                str=s.substr(j+1,len);
            }
            
            if(i+1<s.size() && s[i]==s[i+1])
            {
                j=i-1;
                k=i+2;
                len=2;
                while(j>=0 && k<s.size() && s[j]==s[k])
                {
                    j--;
                    k++;
                    len+=2;
                }
                if(len>ans)
                {
                    ans=len;
                    str=s.substr(j+1,len);
                }
            }
        }
        return str;
    }
};
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;
        int j=0;
        while(i<s.size())
        {
            while(j<t.size() && t[j]!=s[i])
            {
                j++;
            }
            if(j>=t.size() && i!=s.size())return false;
            i++;
            j++;
            
        }
        return true;
    }
};
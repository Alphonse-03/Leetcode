class Solution {
public:
    char findTheDifference(string s, string t) {
       unordered_map<char,int> mp;
        unordered_map<char,int> mp2;
        for(auto &i:s)
        {
            mp[i]++;
        }
        for(auto &i:t)
        {
            mp2[i]++;
        }
        for(auto &i:mp2)
        {
            char ch=i.first;
            if(i.second!=mp[ch])return ch;
        }
       
        return '-';
    }
};
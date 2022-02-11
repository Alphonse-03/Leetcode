class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> mp;
        for(auto& i:s1)
        {
            mp[i]++;
        }
        int k=s1.size();
        unordered_map<char,int> mp2;
        for(int i=0;i<s2.size();i++)
        {
            if(i<k)
            {
                mp2[s2[i]]++;
            }
            else
            {
                if(mp2==mp)return true;
                mp2[s2[i-k]]--;
                if(mp2[s2[i-k]]==0)mp2.erase(s2[i-k]);
                mp2[s2[i]]++;
            }
        }
        if(mp2==mp)return true;
        return false;
    }
};
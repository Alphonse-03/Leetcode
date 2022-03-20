class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        unordered_map<int,int> mp;
        for(int i=0;i<tops.size();i++)
        {
            if(tops[i]==bottoms[i])
            {
                mp[tops[i]]++;
            }
            else
            {
                mp[tops[i]]++;
                mp[bottoms[i]]++;
            }
        }
        int n=tops.size();
        int val=-1;
        for(auto &i:mp)
        {
            if(i.second>=n)
            {
                val=i.first;
                break;
            }
        }
        if(val==-1)return -1;
        int ft=0;
        int fb=0;
        for(auto &i:tops)
        {
            if(i==val)ft++;
        }
        for(auto &i:bottoms)
        {
            if(i==val)fb++;
        }
        return n-max(ft,fb);
        
        
        
    }
};
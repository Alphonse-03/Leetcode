class Solution {
public:
    int minDeletions(string s) {
        vector<int>mp(26);
        for(auto &i:s){
            mp[i-'a']++;
        }
        unordered_map<int,int> freq;
        for(auto &i:mp){
            if(i!=0)freq[i]++;
        }
        int ans=0;
        //3:3 2:1
        // 1
        for(auto &i:freq){
           
            while(freq[i.first]>1){
             
                for(int j=i.first;j>=0;j--){
                    if(freq.find(j)==freq.end()){
                        ans+=i.first-j;
                        if(j!=0)freq[j]=1;
                        freq[i.first]--;
                        if(freq[i.first]==0) freq.erase(i.first);
                        
                        break;
                    }
                }
                //i.second--;
            
                
                    
                }
            }
        
        
        
        return ans;
        
        
    }
};
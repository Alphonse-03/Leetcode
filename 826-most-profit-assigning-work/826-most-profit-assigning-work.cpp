class Solution {
public:
    // int maxProfitAssignment(vector<int>& d, vector<int>& p, vector<int>& w) {
    //     vector<pair<int,int>> vec;
    //     for(int i=0;i<d.size();i++){
    //         vec.push_back({d[i],p[i]});
    //     }
    //     sort(vec.begin(),vec.end(),[&](auto &a,auto &b){
    //         if(a.first==b.first)return a.second<b.second;
    //         else return a.first<b.first;
    //     });
    //     int profit=0;
    //     for(auto &i:w){
    //         int start=0;
    //         int end=vec.size();
    //         while(start<end){
    //             int mid=start+(end-start)/2;
    //             if(vec[mid].first==i){start=mid;break;}
    //             if(vec[mid].first>i){
    //                 end=mid-1;
    //             }
    //             else{
    //                 start=mid+1;
    //             }
    //         }
    //             cout<<start<<endl;
    //         if(vec[start].first<=i)profit+=vec[start].second;
    //     }
    //     return profit;
    // }
     int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker){
        unordered_map<int,int>mp;  
        int m=0,ans=0;
        vector<vector<int>>v;
        
        for(int i=0;i<difficulty.size();i++)
            v.push_back({difficulty[i],profit[i]});
        
        sort(v.begin(),v.end());
        
        for(int i=0;i<difficulty.size();i++)
            mp[v[i][0]]=m=max(m,v[i][1]);
        
        sort(difficulty.begin(),difficulty.end());
        
        for(int a:worker){
            int j=lower_bound(difficulty.begin(),difficulty.end(),a)-difficulty.begin();
            
            if(difficulty[j]>a || j==difficulty.size())
                j--;
            if(j>=0)
                ans+=mp[difficulty[j]];
        }
        return ans;
    }
};
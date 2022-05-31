class unionFind{
    vector<int> rank;
    vector<int> parent;
    public:
    int groupCount;
    unionFind(int n):groupCount(n){
        rank=vector<int>(n);
        parent=vector<int>(n);
    }
    int find(int x){
        if(parent[x]==x)return x;
        return parent[x]=find(parent[x]);
    }
    void init(int x){
        parent[x]=x;
    }
    void unify(int x,int y){
        int parent_x=find(x);
        int parent_y=find(y);
        if(parent_x==parent_y)return;
        groupCount--;
        if(rank[parent_x]<rank[parent_y])parent[parent_x]=parent_y;
        else if(rank[parent_x]>rank[parent_y])parent[parent_y]=parent_x;
        else{
            parent[parent_y]=parent_x;
            rank[parent_x]++;
        }
        
    }
};


class Solution {
public:
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        int size=accounts.size();
        unionFind uf(size);
        
        unordered_map<string,int> mp;
        
        for(int i=0;i<size;i++){
            uf.init(i);
            auto acc=accounts[i];
            for(int j=1;j<acc.size();j++){
                if(mp.find(acc[j])==mp.end()){
                    mp[acc[j]]=i;
                }
                else{
                    int x=mp[acc[j]];
                    uf.unify(i,x);
                }
            }
        }
        int nos_group=uf.groupCount;
        
        vector<vector<string>> ans(nos_group);
        unordered_map<int,int> ids;
        int nextId=0;
        
        for(auto &it:mp){
            int par=uf.find(it.second);
            auto iter=ids.find(par);
            if(ids.find(par)==ids.end()){
                ans[nextId].push_back(accounts[par][0]);
                ans[nextId].push_back(it.first);
                ids[par]=nextId;
                nextId++;
                
            }
            else{
                ans[iter->second].push_back(it.first);
            }
        }
        
        for(auto &i:ans){
            sort(i.begin()+1,i.end());
        }
        return ans;
        
        
        
        
    }
};
















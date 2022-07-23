class NumberContainers {
public:
    
    map<int,int> idx;
    map<int,set<int>> mp;
 
    NumberContainers() {
        
    }
    
    void change(int index, int number) {
        if(idx.find(index)==idx.end()){
            idx[index]=number;
            mp[number].insert(index);
        }
        else{
            int p=idx[index];
            mp[idx[index]].erase(index);
            idx[index]=number;
            mp[number].insert(index);
            if(mp[p].size()==0)mp.erase(p);
        }
        
    }
    
    int find(int number) {
        if(mp.find(number)==mp.end())return -1;
        else return *mp[number].begin();
    }
};



/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 
 
 
 
 
 
 
https://mega.nz/folder/orIjnYKJ#wFvYtLyQrtAnZLwjmPCM4A/folder/E6xQmaZB

[7/22, 10:51 PM] https://mega.nz/folder/kxFFzDIZ#hmV7grIfYzLMemv9QtZWUQ
 
 
 
    map<int,priority_queue<int,vector<int>,greater<int>>>pq;
    map<int,set<int>>vis;
    map<int,int> idx;
    
    NumberContainers() {
        
    }
    
    void change(int index, int number) {
        if(idx.find(index)==idx.end()){
            idx[index]=number;
            pq[number].push(index);
        }
        else{
            if(idx[index]!=number){
            vis[idx[index]].insert(index);
            idx[index]=number;
            pq[number].push(index);}
        }
    }
    
    int find(int number) {
        if(pq[number].size()==0)return -1;
        while(pq[number].size() && vis[number].find(pq[number].top())!=vis[number].end() ){
            int x=pq[number].top();
            pq[number].pop();
            vis[number].erase(x);
        }
        return pq[number].size()?pq[number].top():-1;
    }
 */
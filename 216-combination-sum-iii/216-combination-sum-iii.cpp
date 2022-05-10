class Solution {
public:
    
    void helper(int k,int n,set<vector<int>>& st,vector<int>& t,int start){
        if(n==0 && t.size()==k){sort(t.begin(),t.end());st.insert(t);return;}
        if(n<=0 || t.size()>=k){return;}
        for(int i=start;i<=9;i++){
            t.push_back(i);
            helper(k,n-i,st,t,i+1);
            t.pop_back();
        }
       
        
    }
    
    
    
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> t;
        set<vector<int>> st;
        helper(k,n,st,t,1);
        for(auto &i:st){
            ans.push_back(i);
        }
        return ans;
    }
};
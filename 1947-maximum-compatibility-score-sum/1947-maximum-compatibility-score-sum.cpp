class Solution {
public:
    
    int score(vector<int>& a,vector<int>& b){
        int c=0;
        for(int i=0;i<a.size();i++){
            if(a[i]==b[i])c++;
        }
        return c;
    }
    
    
    int helper(vector<vector<int>>& stu,vector<vector<int>>& men,int i, vector<bool>& vis){
        if(i==stu.size())return 0;
        int ans=0;
        for(int j=0;j<men.size();j++){
            if(vis[j]==false)
            {
                vis[j]=true;
                ans=max(ans,score(stu[i],men[j])+helper(stu,men,i+1,vis));
                vis[j]=false;
              
            }
            
        }
        return ans;
    }
    
    
    
    
    
    
    int maxCompatibilitySum(vector<vector<int>>& students, vector<vector<int>>& mentors) {
      //  set<vector<int>> st;
        int n=mentors.size();
        vector<bool> vis(n);
        return helper(students,mentors,0,vis);
        
    }
};
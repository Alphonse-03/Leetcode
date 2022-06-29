class Solution {
public:
    // Input: vec = [[6,0],[5,0],[4,0],[3,2],[2,2],[1,4]]
    
    
    //temp=[[4,0],[5,0],[6,0]]
    
    // Output: [[4,0],[5,0],[2,2],[3,2],[1,4],[6,0]]
    
    vector<vector<int>> reconstructQueue(vector<vector<int>>& vec) {
        vector<vector<int>> ans;
        sort(vec.begin(),vec.end(),[&](auto &a,auto &b){
            if(a[0]==b[0])return a[1]<b[1];
            else return a[0]>b[0];
        });
      
        for(auto &i:vec){
            int dem=i[1];  
            int j=0;
            while(dem && j<ans.size()){
                if(ans[j][0]>=i[0])dem--;
                j++;
            
            } 
            if(ans.size()==0){
                ans.push_back(i);
            }
            else{
             
                ans.insert(ans.begin()+j,i);
            }
            
        }
        
        
        
        
        
        
        return ans;
    }
};
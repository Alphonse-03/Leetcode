class Solution {
public:
    
    vector<vector<string>> ans;
    bool safe(vector<string>& vec,int r,int c){
        int n=vec.size();
        for(int i=r-1;i>=0;i--){
            if(vec[i][c]=='Q')return false;
        }
        
        int x=r-1,y=c-1;
        while(x>=0 && y>=0){
            if(vec[x][y]=='Q')return false;
            x--;
            y--;
        }
        x=r-1;
        y=c+1;
        while(x>=0 && y<n){
            if(vec[x][y]=='Q')return false;
            x--;
            y++;
        }
        return true;
    }
     void helper(vector<string>& temp,int r){
        if(r==temp.size()){
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<temp.size();i++){
            if(safe(temp,r,i))
            {   
                temp[r][i]='Q';
                helper(temp,r+1);
                temp[r][i]='.';
            }
        }
       
    }
    
    
  
  
    

    
   
    
    
    
     vector<vector<string>> solveNQueens(int n) {
        vector<string> temp(n,string(n,'.'));
        helper(temp,0);
        return ans;
    }
    
    
    
     
    
    
};







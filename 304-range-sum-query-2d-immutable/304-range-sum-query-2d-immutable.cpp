class NumMatrix {
public:
    vector<vector<int>> pref;
    NumMatrix(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++){
            vector<int> temp;
            for(int j=0;j<matrix[i].size();j++){
                if(j==0){
                    temp.push_back(matrix[i][j]);
                }
                else {
                    temp.push_back(temp.back()+matrix[i][j]);
                }
            }
            pref.push_back(temp);
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        long long ans=0;
        for(int i=row1;i<=row2;i++){
            ans+=pref[i][col2];
            if(col1!=0){
                ans-=pref[i][col1-1];
            }
        }
        return ans;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
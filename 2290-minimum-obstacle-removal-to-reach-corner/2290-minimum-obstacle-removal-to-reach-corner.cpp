typedef tuple<int,int,int> t;
class Solution {
public:
    int minimumObstacles(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        priority_queue<t,vector<t>,greater<t>> pq;
        
        vector<vector<int>> dp(n,vector<int>(m,INT_MAX));
        
        vector<vector<int>> dirs={{1,0},{-1,0},{0,1},{0,-1}};
        pq.push({grid[0][0],0,0});

           while (!pq.empty()) {
            auto [c,i, j] = pq.top();
            pq.pop();
            
            if (i == n - 1 && j == m - 1) {
                return c + grid[i][j];
            }
            
            for (auto &d: dirs) {
                int x = d[0] + i;
                int y = d[1] + j;
                
                if (x < 0 || y < 0 || x >= n || y >= m)
                    continue;
                
                if (dp[x][y] > grid[x][y] + c) {
                    dp[x][y] = grid[x][y] + c;
                    pq.push({grid[x][y] + c,x, y});
                }
            }
            
            
        }
        return -1;
    }
};
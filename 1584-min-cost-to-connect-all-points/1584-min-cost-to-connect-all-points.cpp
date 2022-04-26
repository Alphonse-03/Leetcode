class Solution {
public:
	int minCostConnectPoints(vector<vector<int>>& points) {

		int N = points.size();
		vector<vector<pair<int, int>>> graph(N);

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (i == j) continue;

				graph[i].push_back({abs(points[i][0] - points[j][0]) + abs(points[i][1] - points[j][1]), j});

			}
		}

		priority_queue<pair<int, int>, vector<pair<int, int>> , greater<pair<int, int>>> pq;
		pq.push({0, 0});
		vector<bool> vis(N, false);
        int ans = 0;

		while (!pq.empty()) {
			int sz = pq.size();
			while (sz--) {
				int u = pq.top().second; int wt = pq.top().first; pq.pop();
				if (vis[u]) continue;

				vis[u] = true; ans += wt;
				for (auto nbr : graph[u]) {
					int v = nbr.second;
					int costTillNbr = nbr.first;
					if (!vis[v]) pq.push({costTillNbr, v});
				}
			}
		}

		return ans;
	}
};
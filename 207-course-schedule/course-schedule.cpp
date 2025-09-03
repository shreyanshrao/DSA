class Solution {
public:
    bool dfs(int node, vector<vector<int>>& adj, vector<int>& vis, vector<int>& pathVis) {
        vis[node] = 1;      
        pathVis[node] = 1; 
        for (auto neigh : adj[node]) {
            if (!vis[neigh]) {
                if (dfs(neigh, adj, vis, pathVis)) return true;
            } else if (pathVis[neigh]) {
               
                return true;
            }
        }

        pathVis[node] = 0;
        return false;
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
       
        vector<vector<int>> adj(numCourses);
        for (auto &p : prerequisites) {
            adj[p[1]].push_back(p[0]); 
        }

        vector<int> vis(numCourses, 0), pathVis(numCourses, 0);

        for (int i = 0; i < numCourses; i++) {
            if (!vis[i]) {
                if (dfs(i, adj, vis, pathVis)) return false; 
            }
        }
        return true;
    }
};

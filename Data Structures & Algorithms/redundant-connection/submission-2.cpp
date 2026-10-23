class Solution {
public:
    vector<int> parent;

    // Find with path compression
    int find(int x) {
        if (parent[x] != x)
            parent[x] = find(parent[x]);
        return parent[x];
    }

    // Union two nodes, return false if already connected
    bool unite(int a, int b) {
        int pa = find(a);
        int pb = find(b);
        if (pa == pb) return false; // cycle detected
        parent[pa] = pb;
        return true;
    }

    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        parent.resize(n + 1);
        
        // Initialize each node's parent to itself
        for (int i = 1; i <= n; i++)
            parent[i] = i;

        // Process edges
        for (auto &e : edges) {
            if (!unite(e[0], e[1])) {
                return e; // this edge creates a cycle
            }
        }

        return {};
    }
};
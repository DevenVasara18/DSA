/*
Intuition:
- Create a tree using the given edges.
- Use DFS / Euler Tour to calculate tin[], tout[], depth[] and prefix XOR masks.
- Use bitmask to represent character frequency parity:
  - 1 << (s[u] - 'a') represents the character at node u.
  - XOR toggles a character's bit between odd and even frequency.
- Use Binary Lifting to find the LCA of two nodes efficiently.
- Use a Fenwick Tree (BIT) to handle character updates on subtrees.
For an update query:
- Find the old character mask and the new character mask.
- Calculate delta = oldMask ^ newMask.
- Update the Euler Tour range [tin[u], tout[u]] using the Fenwick Tree.
- Update the character at node u.
For a path query (u, v):
- Find w = LCA(u, v).
- Calculate the path mask:
mask = getMask(u) ^ getMask(v) ^ (1 << (s[w] - 'a'))

- Check whether the path can form a palindrome:
- If mask has at most one set bit → true.
- Otherwise → false.
Complexity:
- Preprocessing: O(n log n)
- Each update: O(log n)
- Each path query: O(log n)
- Space: O(n log n)
*/
/*

class Solution {
public:
    vector<vector<int>> graph;
    vector<vector<int>> up;
    vector<int> depth, tin, tout;
    vector<int> prefix;
    vector<int> bit;
    int timer, LOG, n;

    void add(int idx, int mask) {
        for (int i = idx; i <= n; i += i & -i) {
            bit[i] ^= mask;
        }
    }

    int get(int idx) {
        int mask = 0;

        for (int i = idx; i > 0; i -= i & -i) {
            mask ^= bit[i];
        }

        return mask;
    }

    void updateRange(int l, int r, int mask) {
        add(l, mask);

        if (r < n) {
            add(r + 1, mask);
        }
    }

    int getMask(int u) {
        return prefix[u] ^ get(tin[u]);
    }

    int lca(int u, int v) {
        if (depth[u] < depth[v]) {
            swap(u, v);
        }

        int diff = depth[u] - depth[v];

        for (int j = 0; j < LOG; j++) {
            if (diff & (1 << j)) {
                u = up[u][j];
            }
        }

        if (u == v) {
            return u;
        }

        for (int j = LOG - 1; j >= 0; j--) {
            if (up[u][j] != up[v][j]) {
                u = up[u][j];
                v = up[v][j];
            }
        }

        return up[u][0];
    }

    vector<bool> palindromePath(int n,
        vector<vector<int>>& edges,
        string s,
        vector<string>& queries) {

        this->n = n;
        timer = 0;
        LOG = 1;

        while ((1 << LOG) <= n) {
            LOG++;
        }

        graph.assign(n, {});
        up.assign(n, vector<int>(LOG, 0));
        depth.assign(n, 0);
        tin.assign(n, 0);
        tout.assign(n, 0);
        prefix.assign(n, 0);
        bit.assign(n + 1, 0);

        for (auto& e : edges) {
            graph[e[0]].push_back(e[1]);
            graph[e[1]].push_back(e[0]);
        }

        vector<array<int, 3>> st;
        st.push_back({0, 0, 0});

        while (!st.empty()) {
            auto [u, p, state] = st.back();
            st.pop_back();

            if (state == 0) {
                tin[u] = ++timer;
                up[u][0] = p;

                for (int j = 1; j < LOG; j++) {
                    up[u][j] = up[up[u][j - 1]][j - 1];
                }

                prefix[u] = (u == 0 ? 0 : prefix[p])
                            ^ (1 << (s[u] - 'a'));

                st.push_back({u, p, 1});

                for (int i = (int)graph[u].size() - 1;
                     i >= 0; i--) {
                    int v = graph[u][i];

                    if (v == p) {
                        continue;
                    }

                    depth[v] = depth[u] + 1;
                    st.push_back({v, u, 0});
                }
            } else {
                tout[u] = timer;
            }
        }

        vector<bool> ans;

        for (string& q : queries) {
            string type;
            int u, v;
            stringstream ss(q);
            ss >> type >> u;

            if (type == "update") {
                char c;
                ss >> c;

                int oldMask = 1 << (s[u] - 'a');
                int newMask = 1 << (c - 'a');
                int delta = oldMask ^ newMask;

                updateRange(tin[u], tout[u], delta);
                s[u] = c;
            } else {
                ss >> v;

                int w = lca(u, v);

                int mask = getMask(u) ^ getMask(v)
                           ^ (1 << (s[w] - 'a'));

                ans.push_back((mask & (mask - 1)) == 0);
            }
        }

        return ans;
    }
};

*/
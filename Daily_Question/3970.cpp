/*
Remember this for interviews:
1. Create an adjacency list for the directed weighted graph.
2. Create dist[n][k+1] and initialize it with infinity.
3. Use a min-priority queue storing {cost, node, count}.
4. Start from {0, 0, 1} because the starting node itself counts.
5. Extract the minimum-cost state.
6. If the destination is reached, return its cost.
7. Traverse all outgoing neighbors.
8. If the next character is identical, increment count.
9. Otherwise, reset count = 1.
10. If count > k, skip that transition.
11. Calculate the new cost and update dist[next][count] if smaller.
12. If the priority queue becomes empty, return -1.
5. Complexity analysis
Let:
- (n) = number of nodes.
- (m) = number of edges.
- (k) = maximum consecutive count.
Complexity	Value
Time	(O((n k + m k)log(nk)))
Space	(O(nk + m))
*/
/*

class Solution {
public:
    int shortestPath(int n, vector<vector<int>>& edges, string labels, int k) {

        vector<vector<pair<int,int>>> adj(n);

        for (auto &e : edges) {
            adj[e[0]].push_back({e[1], e[2]});
        }

        vector<vector<long long>> dist(n, vector<long long>(k + 1, LLONG_MAX));

        priority_queue<
            tuple<long long, int, int>,
            vector<tuple<long long, int, int>>,
            greater<tuple<long long, int, int>>
        > pq;

        dist[0][1] = 0;
        pq.push({0, 0, 1});

        while (!pq.empty()) {

            auto [cost, node, cnt] = pq.top();
            pq.pop();

            if (cost != dist[node][cnt])
                continue;

            if (node == n - 1)
                return cost;

            for (auto [next, wt] : adj[node]) {

                int newCnt;

                if (labels[node] == labels[next])
                    newCnt = cnt + 1;
                else
                    newCnt = 1;

                if (newCnt > k)
                    continue;

                long long newCost = cost + wt;

                if (newCost < dist[next][newCnt]) {

                    dist[next][newCnt] = newCost;

                    pq.push({newCost, next, newCnt});
                }
            }
        }

        return -1;
    }
};

*/
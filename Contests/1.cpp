#include <bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;
const int INF = 1e9;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<pair<int, int>>> adj(n + 1);
        vector<pair<int, int>> edges(m + 1);
        for (int i = 1; i <= m; ++i)
        {
            int u, v;
            cin >> u >> v;
            edges[i] = {u, v};
            adj[u].push_back({v, i});
            adj[v].push_back({u, i});
        }

        vector<int> tin(n + 1, 0), low(n + 1, 0);
        vector<char> vis(n + 1, 0);
        vector<char> isBridge(m + 1, 0);
        int timer = 0;
        function<void(int, int)> dfs = [&](int v, int pe)
        {
            vis[v] = 1;
            tin[v] = low[v] = ++timer;
            for (auto [to, ei] : adj[v])
            {
                if (ei == pe)
                    continue;
                if (vis[to])
                    low[v] = min(low[v], tin[to]);
                else
                {
                    dfs(to, ei);
                    low[v] = min(low[v], low[to]);
                    if (low[to] > tin[v])
                        isBridge[ei] = 1;
                }
            }
        };
        for (int i = 1; i <= n; ++i)
            if (!vis[i])
                dfs(i, -1);

        vector<int> parent(n + 1);
        iota(parent.begin(), parent.end(), 0);
        function<int(int)> findp = [&](int x)
        {
            return parent[x] == x ? x : parent[x] = findp(parent[x]);
        };
        auto unite = [&](int a, int b)
        {
            a = findp(a);
            b = findp(b);
            if (a == b)
                return;
            parent[b] = a;
        };

        for (int i = 1; i <= m; ++i)
        {
            if (!isBridge[i])
            {
                auto [u, v] = edges[i];
                unite(u, v);
            }
        }

        vector<int> comp(n + 1);
        for (int i = 1; i <= n; ++i)
            comp[i] = findp(i);

        vector<vector<pair<int, int>>> tree(n + 1);
        for (int i = 1; i <= m; ++i)
        {
            if (isBridge[i])
            {
                int u = edges[i].first, v = edges[i].second;
                int cu = comp[u], cv = comp[v];
                tree[cu].push_back({cv, i});
                tree[cv].push_back({cu, i});
            }
        }

        int c1 = comp[1], cN = comp[n];
        vector<char> mandatoryEdge(m + 1, 0);
        if (c1 != cN)
        {
            vector<int> par(n + 1, -1), parEdge(n + 1, -1);
            queue<int> qq;
            qq.push(c1);
            par[c1] = c1;
            while (!qq.empty() && par[cN] == -1)
            {
                int u = qq.front();
                qq.pop();
                for (auto [v, ei] : tree[u])
                {
                    if (par[v] == -1)
                    {
                        par[v] = u;
                        parEdge[v] = ei;
                        qq.push(v);
                    }
                }
            }
            if (par[cN] != -1)
            {
                int cur = cN;
                while (cur != c1)
                {
                    int ei = parEdge[cur];
                    mandatoryEdge[ei] = 1;
                    cur = par[cur];
                }
            }
        }
        vector<int> mandatoryList;
        for (int i = 1; i <= m; ++i)
            if (mandatoryEdge[i])
                mandatoryList.push_back(i);

        int q;
        cin >> q;
        vector<int> queries(q);
        for (int i = 0; i < q; ++i)
            cin >> queries[i];

        if (mandatoryList.empty())
        {
            for (int i = 0; i < q; ++i)
                cout << -1 << (i + 1 == q ? '\n' : ' ');
            continue;
        }

        vector<int> dist(n + 1, INF), nearestEdge(n + 1, INF);
        using State = pair<pair<int, int>, int>;
        priority_queue<State, vector<State>, greater<State>> pq;

        for (int ei : mandatoryList)
        {
            int u = edges[ei].first, v = edges[ei].second;
            if (0 < dist[u] || (0 == dist[u] && ei < nearestEdge[u]))
            {
                dist[u] = 0;
                nearestEdge[u] = min(nearestEdge[u], ei);
                pq.push({{0, ei}, u});
            }
            if (0 < dist[v] || (0 == dist[v] && ei < nearestEdge[v]))
            {
                dist[v] = 0;
                nearestEdge[v] = min(nearestEdge[v], ei);
                pq.push({{0, ei}, v});
            }
        }

        while (!pq.empty())
        {
            auto cur = pq.top();
            pq.pop();
            int d = cur.first.first;
            int eidx = cur.first.second;
            int node = cur.second;
            if (d > dist[node])
                continue;
            if (eidx != nearestEdge[node])
                continue;
            for (auto [to, _ei] : adj[node])
            {
                int nd = d + 1;
                if (nd < dist[to] || (nd == dist[to] && eidx < nearestEdge[to]))
                {
                    dist[to] = nd;
                    nearestEdge[to] = eidx;
                    pq.push({{nd, eidx}, to});
                }
            }
        }

        for (int i = 0; i < q; ++i)
        {
            int c = queries[i];
            int ans = (nearestEdge[c] == INF ? -1 : nearestEdge[c]);
            cout << ans << (i + 1 == q ? '\n' : ' ');
        }
    }
    return 0;
}

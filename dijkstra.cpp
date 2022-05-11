#include<iostream>
#include<vector>

 
using namespace std;
int a[1005][1005]; 
 

void Init(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            a[i][j] = 0;
        }
    }
}

int min_dist(int n, int d[], int used[])
{
    int min = 2147483647;
    int index;
    for (int i = 1; i <= n; i++)
    {
        if (!used[i] && d[i] < min)
        {
            min = d[i];
            index = i;
        }
    }
    return index;
}
 
void Dijkstra(vector<int> adj[], int u, int n)
{
    int d[1005];          
    int used[1005] = {0}; 
    for (int i = 1; i <= n; i++)
    {
        d[i] = 2147483647; 
    }
    d[u] = 0;
    int count = n;
    
    while (count--)
    {
        int index = min_dist(n, d, used);
        used[index] = 1;
        for (int i = 0; i < adj[index].size(); i++)
        {
            int v = adj[index][i];
            if (d[v] > d[index] + a[index][v])
            {
                d[v] = d[index] + a[index][v];
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
 
        cout << d[i] << " ";
    }
    cout << endl;
}
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, u;
        cin >> n >> m >> u;
        Init(n);
        vector<int> adj[1005];
        for (int i = 0; i < m; i++)
        {
            int u, v, p;
            cin >> u >> v >> p;
            
            if (!a[u][v] || a[u][v] > p)
            {
                a[u][v] = p;
                a[v][u] = p;
            }
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Dijkstra(adj, u, n);
    }
}

#include<iostream>
#include<vector>
/*#include<queue>
#include<algorithm>
#include<cmath>*/  // 3 cái thu vi?n này ko c?n dùng d?n
 
using namespace std;
int a[1005][1005]; // tr?ng s? c?nh u,v
 
//Kh?i t?o tr?ng s?
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
//Tìm dmin, do?n này mình xd thành 1 hàm luôn
int min_dist(int n, int d[], int used[])
{
    int min = 2147483647; // Ch?y trên ideone n?u d? INT_MAX s? b? l?i, nên mình d? giá tr?
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
    int d[1005];          // luu du?ng di ng?n nh?t
    int used[1005] = {0}; //Ðánh d?u d?nh dã tham
    for (int i = 1; i <= n; i++)
    {
        d[i] = 2147483647; //Kh?i t?o du?ng di ng?n nh?t t? d?nh
        // u d?n các d?nh còn l?i
    }
    d[u] = 0;
    int count = n;
    // Tham n d?nh, m?i l?n gi?m count di 1
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
            //Phòng tru?ng h?p nh?p tr?ng s? u, v nhi?u l?n, b?n
            //b? if di s? th?y
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

#include<bits/stdc++.h>
using namespace std;
vector<int> List[1005];
vector<pair<int,int> >ck;
bool chuaxet[1005];
void DFS(int u)
{
	chuaxet[u]=false;
	
	for(int i=0;i<List[u].size();i++){
	
	    int v=List[u][i];
	    if(chuaxet[v]) {
	    	ck.push_back({u,v});
	    	DFS(v);
		}
    }
}

int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t,n,m,u,x,y,i;
	cin>>t;
	while(t--)
	{
		
		memset(chuaxet,true,sizeof(chuaxet));
		for(int i=0;i<1005;i++)
		    List[i].clear();
		ck.clear();
		cin>>n>>m>>u;
		for(int i=1;i<=m;i++)
		{
			cin>>x>>y;
			List[x].push_back(y);
			List[y].push_back(x);
		}
		DFS(u);
		if(ck.size()!=n-1) cout<<-1<<endl;
		else{
		
		    for(int i=0;i<ck.size();i++){
			   cout<<ck[i].first<<" "<<ck[i].second<<endl;
		    }
	    }
		
    }
   
}

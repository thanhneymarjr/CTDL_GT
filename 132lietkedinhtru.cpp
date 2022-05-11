#include<bits/stdc++.h>
using namespace std;

vector<int> ke[1005];
bool ok[1005];
int truoc[1005];
void DFS(int u)
{
	
	ok[u]=true;
	for(int i=0;i<ke[u].size();i++)
	    if(!ok[ke[u][i]])
	    {
	    	//truoc[ke[u][i]]=u;
	    	DFS(ke[u][i]);
		}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin>> t;
	while(t--)
	{
		for(int i=0;i<1001;i++)
		    ke[i].clear();
		
		
		int a,b;
		cin>>a>>b;
		for(int i=0;i<b;i++)
		{
			int u,v;
			cin>>u>>v;
			ke[u].push_back(v);
			ke[v].push_back(u);
		}
		memset(ok,false,sizeof(ok));
		int res=0;
		for(int i=1;i<=a;i++)
		{
			if(!ok[i])
			{
				res++;
				DFS(i);
			}
		}
		for(int i=1;i<=a;i++)
		{
			memset(ok,false,sizeof(ok));
			ok[i]=true;
			int dem=0;
			for(int j=1;j<=a;j++)
			{
				if(!ok[j])
				{
					dem++;
					DFS(j);
				}
			}
			if(dem>res) cout<<i<<' ';
			
 		}
 		cout<<'\n';
	}
	return 0;
}

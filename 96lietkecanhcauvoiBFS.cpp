#include<bits/stdc++.h>
using namespace std;

vector<int> ke[1005];
bool ok[1005];
int truoc[1005];
int a,b;
vector< pair<int,int> >ans;
void Reset()
{
	for(int i=0;i<1001;i++)
	
		ke[i].clear();
	memset(ok,false,sizeof(ok));
	
}
void BFS(int u)
{
	
	queue<int> q;
	q.push(u);
	while(q.size()>0)
	{
		int top=q.front();q.pop();
		
		ok[top]=true;
		for(int i=0;i<ke[top].size();i++)
		{
			if(!ok[ke[top][i]])
			{
				ok[ke[top][i]]=true;
				truoc[ke[top][i]]=top;
				q.push(ke[top][i]);
			}
		}
	}
}
int TPLT()
{
	int res=0;
	for(int i=1;i<=a;i++)
	{
		if(!ok[i])
		{
			res++;
			BFS(i);
		}
	}
	return res;
}
void Canhcau(int canh,int res,vector< pair<int,int> >tmp)
{
	for(int i=0;i<b;i++)
	{
		if(i!=canh)
		{
			ke[tmp[i].first].push_back(tmp[i].second);
			ke[tmp[i].second].push_back(tmp[i].first);
		}
	}
	int dem=TPLT();
	if(dem>res)
	{
		if(tmp[canh].first<tmp[canh].second)
		   ans.push_back({tmp[canh].first,tmp[canh].second});
		else ans.push_back({tmp[canh].second,tmp[canh].first});   
	}
	
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin>> t;
	while(t--)
	{
		
		
		Reset();
		ans.clear();
		
		cin>>a>>b;
		vector< pair<int, int> > tmp;
		for(int i=0;i<b;i++)
		{
			int u,v;
			cin>>u>>v;
			tmp.push_back({u,v});
			ke[u].push_back(v);
			ke[v].push_back(u);
		}
		int res=TPLT();
		for(int canh=0;canh<b;canh++)
		{
			Reset();
			Canhcau(canh,res,tmp);
		}
		sort(ans.begin(),ans.end());
		for(int i=0;i<ans.size();i++)
		    cout<<ans[i].first<< ' ' <<ans[i].second<<' ';
		cout<<'\n';
	}
	return 0;
}

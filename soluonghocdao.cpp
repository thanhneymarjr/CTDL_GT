#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> A;
vector<pair<int, int>> adj;
vector<vector<bool>> vis;


int bfs(){
	
	int count=0;
	
	for(auto p: adj){
		int row=p.first,col=p.second;
		if(vis[row][col]==true){
			continue;
		}
		
		count++;
		
		queue<pair <int, int>> q;
		q.push({row,col});
		vis[row][col]=true;
		
		while(!q.empty()){
			auto node=q.front();q.pop();
			int status_row=node.first,status_col=node.second;
			
			for(int i=status_row-1;i<=status_row+1;i++){
			    for(int j=status_col-1;j<=status_col+1;j++){
			    	if(A[i][j]!=1) continue;
				    if(vis[i][j]) continue;
				    vis[i][j]=true;
				    q.push({i,j});
			    }
		    }
			
		}
		
		
	}
	return count;
	
}






void solve(){
	
	A.clear();
	adj.clear();
	
	int n,m;
	cin>>n>>m;
	
	A.assign(n+5,vector<int>(m+5));
	vis.assign(n+5,vector<bool>(m+5,false));
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>A[i][j];
			if(A[i][j]==1){
				adj.push_back({i,j});
			}	
		}
	}
	
	cout<<bfs()<<endl;
	
}
int main(){
	int test=1;
	cin>>test;
	cin.ignore();
	while(test--) solve();


	
}


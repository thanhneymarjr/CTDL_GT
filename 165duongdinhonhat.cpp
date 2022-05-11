#include<bits/stdc++.h>
using namespace std;


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n+5][m+5];
		int F[n+5][m+5];
		memset(F,0,sizeof(F));
		for(int i=1;i<=n;i++)
		    for(int j=1;j<=m;j++)
		        cin>>a[i][j];
		        
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				if(i==1 && j==1) F[i][j]=a[i][j];
				else if(i==1) F[i][j]=a[i][j] + F[i][j-1];
				else if(j==1) F[i][j]=a[i][j] + F[i-1][j];
				else F[i][j]=a[i][j] + min(F[i-1][j-1],min(F[i-1][j],F[i][j-1]));
			}
		}
		cout<< F[n][m] << '\n';	
	}

	return 0;
}



#include<bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin>> t;
	while(t--)
	{
		int n,m;
		cin >> n>> m;
		int a[n+1][m+1];
		int dp[n+1][m+1];
		for(int i=0;i<=n;i++)
		{
			for(int j=0;j<=m;j++)
			    a[i][j]=dp[i][j]=0;
		}
		dp[1][1]=1;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			    cin>> a[i][j];
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				if(i==1&&j==1) continue;
				dp[i][j]= dp[i-1][j] + dp[i][j-1];
				
			}
		}
		cout<< dp[n][m] << '\n';
		}
		
	return 0;
}

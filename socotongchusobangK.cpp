#include<bits/stdc++.h>
using namespace std;
long long dp[101][50005];


const long long mod=1e9+7;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	for(int i=0;i<101;i++)
	    dp[i][0]=0;
	for(int j=0;j<50005;j++)
	    dp[0][j]=0;
	for(int j=1;j<=9;j++)
	    dp[1][j]=1;
	for(int i=1;i<=100;i++)
        for(int so=0;so<=9;so++)
            for(int j=so;j<=50000;j++)
                dp[i][j]=(dp[i][j]%mod +dp[i-1][j-so]%mod)%mod;
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		cout<< dp[n][k]<< '\n';
	}

	return 0;
}


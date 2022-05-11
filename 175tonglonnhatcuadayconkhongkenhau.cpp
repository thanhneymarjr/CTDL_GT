#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+5],dp[n+5]={0};
		for(int i=1;i<=n;i++)
		    cin>>a[i];
		dp[1]=a[1];
		dp[2]=max(a[1],a[2]);
		for(int i=3;i<=n;i++)
		{
			dp[i]=max(dp[i-2]+a[i],dp[i-1]);
		}
		cout<< dp[n] <<'\n';
    }
    
	return 0;
}


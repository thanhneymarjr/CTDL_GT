#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	long long dp[105]={0};
	dp[1]=1;dp[2]=2;dp[3]=4;
	for(int i=4;i<=100;i++)
	    dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<dp[n]<<'\n';		
    }
    
	return 0;
}

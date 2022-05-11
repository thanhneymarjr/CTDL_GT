#include<bits/stdc++.h>
using namespace std;
const long long mod=1e9+7;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin>>t;
	while(t--)
	{
		long long n,k;
		cin>>n>>k;
		long long res=1;
		if(k>n) res=0;
		for(int i=n-k+1;i<=n;i++)
		    res=(res*i)%mod;
		cout<<res<<'\n';
	}

	return 0;
}


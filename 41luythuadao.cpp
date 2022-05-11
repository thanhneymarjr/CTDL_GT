#include <bits/stdc++.h>
using namespace std;

const long long mod=1e9+7;
long long Pow(long long n,long long k)
{
	if(k==1) return n%mod;
	long long tmp = Pow(n,k/2);
	if(k%2==0) return (tmp*tmp%mod);
	return (tmp*tmp%mod) *n %mod;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long k=0,m=n;
		while(m)
		{
			k= 10*k+m%10;
			m/=10;
		}
		cout<<Pow(n,k)<<'\n';
		
	}
	return 0;
}

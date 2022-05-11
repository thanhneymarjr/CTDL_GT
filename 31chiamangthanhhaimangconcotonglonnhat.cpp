#include <bits/stdc++.h>
using namespace std;

int a[10000];
int n,k;

void solve()
{
	long long tongk=0,tongday=0;
	for(int i=1;i<=n;i++)
		tongday+=a[i];
	for(int i=1;i<=k;i++)
		tongk+=a[i];
	cout<<tongday-tongk*2<<endl;
}

main()
{
int t;
cin>>t;
while(t--)
{
	cin>>n>>k;
	if(k>n/2)
		k=n-k;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	sort(a+1,a+n+1);
	solve();
}
}

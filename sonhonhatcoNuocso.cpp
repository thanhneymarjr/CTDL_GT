#include<bits/stdc++.h>
using namespace std;

int n;
int v[]={2,3,5,7,11,19,23,29,31};
long long res;

void Try(int i,long long ans,long long uoc)
{
	if(uoc>n)
	    return;
	if(uoc==n)
	    res=min(res,ans);
	for(int j=1;;j++)
	{
		if(ans*v[i]>res) break;
		ans*=v[i];
		Try(i+1,ans,uoc*(j+1));
	}
}
void solve()
{
	cin>>n;
	res=1e18;
	Try(0,1,1);
	cout<< res<< endl;
	
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	int t;
	cin>> t;
	while(t--)
	{
		solve();
	}
	return 0;
}


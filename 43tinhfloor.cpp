#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin>>t;
	while(t--){
		long long n,x,res=0;
		int vt=-1;
		cin>>n>>x;
		vector<long long> a(n+5);
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			if(a[i] <=x)
			{
				vt=i;
			}
		}
		cout<<vt<<endl;
		
	}
	return 0;
}

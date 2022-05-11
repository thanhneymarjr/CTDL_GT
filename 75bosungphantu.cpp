#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        map<long long,bool> d;
        long long L,R;
        vector<long long> a(n);
        for(int i=0;i<n;i++)
        {
        	cin>>a[i];
        	if(i==0) L=R=a[i];
        	L=min(L,a[i]);
        	R=max(R,a[i]);
        	d[a[i]]=false;
		}
		for(int i=0;i<n;i++)
		    d[a[i]]=true;
		long long res=0;
		for(long long i=L;i<=R;i++)
		    if(d[i]==false) res++;
		cout<<res<<'\n';
    }
    return 0;
}

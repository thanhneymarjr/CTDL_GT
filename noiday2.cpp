#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll mod=1e9+7;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin>>t;
	while(t--) {
		int n;
		ll val; 
	    priority_queue<ll, vector<ll>, greater<ll> > a; 
	    cin>> n;
	    for(int i=0; i<n; i++){
		    cin>>val;
		    a.push(val);
	    }
	    ll res=0;
	    while(a.size() > 1){ 
		    ll x = a.top(); a.pop(); 
		    ll y = a.top(); a.pop(); 
		    ll tmp =(x+y)%mod; 
		    a.push(tmp);
		    res += tmp; 
		    res%=mod;
		     
	    }
	    cout << res << endl; 
	}
	return 0;
}

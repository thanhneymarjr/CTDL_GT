#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t; cin >> t;
	while(t--) {
		ll n, res = 0; 
	    cin >> n; 
	    priority_queue<ll, vector<ll>, greater<ll> > a; 
	    for(ll i=0; i<n; i++){
		    ll x; cin >> x;
		    a.push(x);
	    }
	    while(a.size() > 1){ 
		    ll x = a.top(); a.pop(); 
		    ll y = a.top(); a.pop(); 
		    ll tmp = x + y; 
		    res += tmp; 
		    a.push(tmp); 
	    }
	    cout << res << endl; 
	}
	return 0;
}

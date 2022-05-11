#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll p=1e9+7;

int main() {
	int t; cin >> t;
	while(t--) {
		ll n; cin >> n;
		ll a[n], sum=0;
		for(ll i=0; i<n; i++) cin >> a[i];
		sort(a, a+n);
		for(ll i=0; i<n; i++)
			sum+=(a[i]*i);
		cout << sum%p << endl;
	}
	return 0;
}

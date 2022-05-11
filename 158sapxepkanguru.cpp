#include<bits/stdc++.h>
#define M 1000000007
using namespace std;

int n;


main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a + n);
		int ans = n;
		for(int i = n/2 - 1, j = n - 1; i >= 0 && j >= n/2; ){
			if(a[j] >= 2*a[i]){
				ans--;
				j--;i--;
			}
			else i--;
		}
		cout << ans << endl;
	}
}


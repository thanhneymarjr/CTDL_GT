#include<bits/stdc++.h>
using namespace std;


void solve(){
	int n;
	cin>>n;
	vector<int> A(n);
	for(auto &x: A) cin>>x;
	sort(A.begin(),A.end());
	cout<<max({A[n-1]*A[n-2],A[0]*A[1],
	A[n-1]*A[n-2]*A[n-3],A[0]*A[1]*A[n-1]})<<endl;
	
	
	
	
}
int main(){
	int test=1;
	//cin>>test;
	while(test--) solve();


	
}


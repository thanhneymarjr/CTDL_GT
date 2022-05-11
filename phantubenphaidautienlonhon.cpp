#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	vector<int> A(n);
	for(auto &x: A) cin>>x;
	stack<int> stc;
	vector<int> ans(n);
	for(int i=n-1;i>=0;i--){
		while(!stc.empty() && A[i]>=stc.top()){
			stc.pop();
		}
		if(stc.empty()) ans[i]=-1;
		else ans[i]=stc.top();
		stc.push(A[i]);
		
	}
	for(auto x:ans) cout<<x<<" ";
	cout<<endl;
}
int main(){


	int test=1;
	cin>>test;
	while(test--) solve();
}


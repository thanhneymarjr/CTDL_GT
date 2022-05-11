#include<bits/stdc++.h>
using namespace std;


void solve(){
	int n;
	cin>>n;
	vector<int> A(n);
	for(int i=0;i<n;i++) cin>>A[i];
	stack<int> local;
	for(int i=0;i<n;i++){

		
		while(!local.empty() && A[i]>=A[local.top()]){
			local.pop();
			
		}
		if(local.empty()) cout<<i+1<<" ";
		else cout<< i- local.top()<<" ";
		local.push(i);
	}
	cout<<endl;
	
	
	
}
	
	
	
	

int main(){
	int test=1;
	cin>>test;
	cin.ignore();
	while(test--) solve();


	
}


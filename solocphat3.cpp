#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
	ll n;
	cin>>n;
	queue<string> q;
	q.push("");
	vector<string> ans;
	while(!q.empty()){
		string number =q.front();q.pop();
		if(number.length()>n) break;
        if(number.size()>0) ans.push_back(number);
		q.push(number +'6');
		q.push(number +'8');
		
	}
	cout<<ans.size()<<endl;
	for(int i=0;i<ans.size();i++){
		cout<<ans[ans.size()-i-1]<<" ";
	}
	cout<<endl;
	
}
int main(){


	int test=1;
	cin>>test;
	while(test--) solve();
}


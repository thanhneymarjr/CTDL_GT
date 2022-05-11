#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s;
	getline(cin,s);
	stack<int> stc;
	int count=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='('){
			cout<<count<<" ";
			stc.push(count);
			count++;
		}
		else{
			cout<<stc.top()<<" ";
			stc.pop();
		}
	}
	cout<<'\n';
}
int main(){


	int test=1;
	cin>>test;
	while(test--) solve();
}


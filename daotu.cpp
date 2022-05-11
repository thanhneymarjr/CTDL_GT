#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s="much very program this like I";
	stringstream ss;
	ss<<s;
	string str;
	while(ss>>str){
		cout<<str<<endl;
	}
}
int main(){
	int test=1;
	cin>>test;
	cin.ignore();
	while(test--) solve();


	 
}


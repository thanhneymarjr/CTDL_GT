#include<bits/stdc++.h>
using namespace std;
void sinh(string s,int n){
	int ok=0;
	for(int i=n-1;i>=0;i--){
		if(s[i]=='1'){
			s[i]='0';
			ok=1;
			for(int j=i+1;j<n;j++)s[j]='1';
			break;
		}
	}
	if(ok==0)cout<<string(n,'1')<<endl;
	else cout<<s<<endl;

}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		sinh(s,s.length());
	}


	
}


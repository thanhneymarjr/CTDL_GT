#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a,s=0;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			if(a==0) s++;
		}
		cout<< s << '\n';	
	}
	return 0;
}

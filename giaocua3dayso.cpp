#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	vector<ll> v1(n1),v2(n2),v3(n3);
	for(int i=0;i<n1;i++)cin>>v1[i];
	for(int i=0;i<n2;i++)cin>>v2[i];
	for(int i=0;i<n3;i++)cin>>v3[i];
	int index1=0,index2=0,index3=0;
	set<ll> ans;
	while(index1<n1 && index2<n2 &&index3<n3){
		if(v1[index1]==v2[index2]&&v1[index1]==v3[index3]){
			ans.insert(v1[index1]);
			index1++;index2++;index3++;
		}
		ll Max=max(v1[index1],max(v2[index2],v3[index3]));
		if(v1[index1]<Max) index1+=1;
		if(v2[index2]<Max) index2+=1;
		if(v3[index3]<Max) index3+=1;
	}
	
	if(ans.empty()) cout<<-1;
	else{
		for(auto x: ans) cout<<x<<" ";
	}
	cout<<'\n';
	
}
int main(){


	 int test=1;
	 cin>>test;
	 while(test--) solve();
}


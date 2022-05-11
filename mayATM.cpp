#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll A[50]={};
bool isHave=false;
ll sum=0,n,S;
ll len;
ll B[50]={};
void backTrack(int index){
	for(int i=B[index-1]+1;i<=n;i++){
		B[index]=i;
		sum+=A[i];
		if(sum==S && index==len){
			isHave=true;
			return;
		}
		else if(index<len) backTrack(index+1);
		sum-=A[i];
		
	}
	
}
void solve(){
	isHave=false;
	
	cin>>n>>S;
	for(int i=1;i<=n;i++) cin>>A[i];
	ll ans=-1;
	for(int i=1;i<=n;i++){
		sum=0;
		len=i;
		backTrack(1);
		
		if(isHave==true){
			ans=i;
			break;
		}
	}
	cout<<ans<<endl;
	
	
	
}
int main(){
	int test=1;
	cin>>test;
	while(test--) solve();


	
}


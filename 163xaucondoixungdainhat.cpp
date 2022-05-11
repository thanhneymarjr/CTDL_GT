#include<iostream>
using namespace std;
int f[1005][1005]={0};
int qhd(string s){
	int n=s.length(),i,j,k,kq=1;
	for(i=0;i<n;i++) f[i][i]=1;
	for(k=1;k<=n-1;k++){
		for(i=0;i<=n-k-1;i++){
			j=i+k;
			if(s[i]==s[j] && k!=1) f[i][j]=f[i+1][j-1];
			else if(s[i]==s[j] &&k==1) f[i][j]=1;
			else f[i][j]=0;
			if(f[i][j]==1) kq=max(kq,j-i+1);
		}
	}
	return kq;
}


int main(){
	int t;string s;
	cin>>t;
	while(t--){
		cin>>s;
		cout<<qhd(s)<<endl;	
	}

}


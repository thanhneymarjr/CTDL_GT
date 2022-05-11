#include<bits/stdc++.h>
using namespace std;
int main(){
	int T;
	cin>>T;
	while(T--){
		int N,S;
		int A[200];
		int D[40001]={0};
		cin>>N>>S;
		for(int i=0;i<N;i++) cin>>A[i];
		//bai toan co so
		D[0]=1;
		//bang phuong an
		for(int i=0;i<N;i++)
		    for(int k=S;k>=A[i];k--)
		        D[k]=max(D[k],D[k-A[i]]);
		        
		
		//ket qua
		if(D[S]) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}


	 return 0;
}


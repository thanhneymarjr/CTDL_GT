#include<bits/stdc++.h>
using namespace std;
bool check=false;
void sinh(int M[],int n){
	bool ok=false;
	for(int i=n-1;i>=0;i--){
		if(M[i]==0){
			oktrue;
			M[i]=1;
			for(int j=i+1;j<n;j++) M[j]=0;
			break;
		}
	}
	if(ok==false)check=true;
}
bool ktra(int M[],int n){
	for(int i=0;i<n;i++) if(M[i]!=M[n-i-1])return false;
	return true;
	
}
int main(){
	int n;cin>>n;
	int M[100]={ 0 };
	while(check==false){
		if(ktra(M,n)){
			for(int i=0;i<n;i++) cout<<M[i]<< " ";
			cout<<endl;
			
		}
		sinh(M,n);
	}


	
}


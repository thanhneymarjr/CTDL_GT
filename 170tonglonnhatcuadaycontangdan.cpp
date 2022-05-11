#include<bits/stdc++.h>
using namespace std;
int a[1005],c[1005],n;
int tinh(){
	int i,j,kq=0;
	for(i=1;i<=n;i++) c[i]=a[i];
	for(i=1;i<=n;i++){
		for(j=1;j<i;j++)
		    if(a[j]<a[i])
		        c[i]=max(c[i],c[j]+a[i]);
		    kq=max(kq,c[i]);
	}
	return kq;
}

int main(){
	int i,t;
	cin>>t;
	while(t--){
		cin>>n;
		for(i=1;i<=n;i++) cin>>a[i];
		cout<<tinh()<<endl;
	}


}


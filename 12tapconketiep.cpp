#include<bits/stdc++.h>
using namespace std;

void Solve(){
	int n,k;
	cin>>n>>k;
	int a[k+1];
	for(int i=1;i<=k;i++)
	    cin>> a[i];
	    
	int i=k;
	while(i>0 && a[i]== n-k+i) i-=1;
	if(i<=0){
		for(int i=1;i<=k;i++)
		    cout << i << ' ';
		cout << endl;
	}
	else{
		a[i] +=1;
		for(int j=i+1;j<=k;j++)
		    a[j] = a[j-1]+1;
		for(int i=1;i<=k;i++)
		    cout << a[i] << ' ';
		    cout<< endl;
		    
	}
	
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin>> t;
	while(t--)
	{
		Solve();
	}

	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin>> t;
	while(t--)
	{
		int n,k;
		cin >> n >>k;
		int a[k+5];
		int d[100]={0};
		
		for(int i=1;i<=k;i++)
		{
			cin >> a[i];
			d[a[i]]=1;
		}
		int i=k;
		while(i>0 && a[i] == n-k+i) i--;
		if(i<=0) cout << k;
		else
		{
			a[i]+=1;
			for(int j=i+1;j<=k;j++)
			    a[j] = a[j-1] +1;
			for(int j=1;j<=k;j++)
			    d[a[j]]=0;
			int res=0;
			for (int j=1;j<=40;j++)
			     if(d[j]) res++;
			cout << res;
		}
		cout<< '\n';
		 
	}
	return 0;
}


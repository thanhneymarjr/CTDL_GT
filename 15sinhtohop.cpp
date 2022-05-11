#include<bits/stdc++.h>
using namespace std;
int n,k,a[100];
void init()
{
	for(int i=1;i<=k;i++)
	    a[i] =i;
}
void res()
{
	for(int i=1;i<=k;i++)
	    cout << a[i];
	cout << ' ';
}
void Try(int i)
{
	for(int j=a[i-1]+1; j<=n-k+i;j++)
	{
		a[i] =j;
		if(i==k)
		{
			res();
		}
		else Try(i+1);
	}
}

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin>> t;
	while(t--)
	{
		cin >> n >>k;
		init();
		
		Try(1);
		cout << '\n';
	     
	}
	return 0;
}

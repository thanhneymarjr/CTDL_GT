#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[100];

void Try(int i)
{
	for(int j=0;j<=1;j++)
	{
		a[i]= j;
		if(i==n)
		{
			int dem=0;
			for(int l=1;l<=n;l++)
			    if(a[l]==1) dem+=1;
			if(dem == k)
			{
				for(int l=1;l<=n;l++)
				    cout << a[l];
				cout << endl;
			}
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
		Try(1);
	     
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
bool h[11],c[11],nguoc[22],xuoi[22];
int n,res;
int a[11];
int val[10][10];

void init()
{
	for(int i=1;i<=8;i++)
	{
		for(int j=1;j<=8;j++)
		    cin>> val[i][j];
	}
	n=8;
	for(int i=0;i<11;i++)
	    h[i]=c[i]=false;
	for(int i=0;i<22;i++)
	    nguoc[i]=xuoi[i]=false;
	res=0;
}

void Try(int i)
{
	for(int j=1;j<=n;j++)
	{
		if(!h[j] && !c[j] && !nguoc[i+j-1] && !xuoi[i-j+n])
		{
			a[i]=j;
			h[j]=c[j]=nguoc[i+j-1]=xuoi[i-j+n]=true;
			if(i==n)
			{
				int ans=0;
				for(int l=1;l<=8;l++)
				    ans += val[l][a[l]];
				res =max(res,ans);
			}

			else Try(i+1);
			h[j]=c[j]=nguoc[i+j-1]=xuoi[i-j+n]=false;
			
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin>> t;
	while(t--)
	{
		init();
	    Try(1);
	    cout<< res << '\n';
    }

	return 0;
}


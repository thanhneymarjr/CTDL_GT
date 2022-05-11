#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

    int t; 
	cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[105];
        int dp1[105],dp2[105];
        for(int i=1;i<=n;i++)
        {
        	cin>>a[i];
        	dp1[i]=a[i];
        	dp2[i]=a[i];
		}
		for(int i=1;i<n;i++)
		{
			for(int j=1;j<i;j++)
			    if(a[i]>a[j])
			        dp1[i]=max(dp1[i],dp1[j]+a[i]);
		}
		for(int i=n-1;i>=0;i--)
		{
			for(int j=n;j>i;j--)
			    if(a[i]>a[j])
			        dp2[i]=max(dp2[i],dp2[j]+a[i]);
		}
		int res=0;
		for(int i=1;i<=n;i++)
		    res=max(res,dp1[i]+dp2[i]-a[i]);
		    
		cout<< res << '\n';
    }
    return 0;
}

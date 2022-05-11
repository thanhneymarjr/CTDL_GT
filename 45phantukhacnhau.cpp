#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		vector<long long> a(n),b(n-1);
		for(long long i=0;i<n;i++)
		    cin>>a[i];
		for(int i=0;i<n-1;i++)
		    cin>>b[i];
		long long res=n-1;
		for(long long i=0;i<n-1;i++)
		{
			if(a[i]!=b[i])
			{
				res=i;
				break;
			}
		}
		cout<< res+1<< '\n';
	}
	return 0;
}

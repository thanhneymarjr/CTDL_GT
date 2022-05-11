#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin>>t;
	long long n,sum;
	while(t--)
	{
		cin>>n;
		sum=0;
		vector<long long> a(n);
		vector<long long> b(n);
		for(int i=0;i<n;i++)
		    cin>> a[i];
		for(int j=0;j<n;j++)
		    cin>> b[j];
		sort(a.begin(),a.end());
		sort(b.begin(),b.end(),greater<long long>());
		for(int i=0;i<n;i++)
		    sum += a[i]*b[i];
		cout<< sum << '\n';
    }
	return 0;
}

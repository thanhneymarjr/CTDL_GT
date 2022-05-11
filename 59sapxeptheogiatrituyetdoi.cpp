#include<bits/stdc++.h>
using namespace std;
struct dta{
	int val1,i,val2;
};
bool cmp(dta a,dta b)
{
	if(a.val2>b.val2) return false;
	if(a.val2==b.val2&& a.i>b.i )return false;
	return true;
	
}


int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin>> t;
	while(t--)
	{
		int n,x,va;
		cin>>n>>x;
		vector<dta> a(n);
		for(int i=0;i<n;i++){
			cin>>a[i].val1;
			a[i].val2=abs(x-a[i].val1);
			a[i].i=i;
		}
		sort(a.begin(),a.end(),cmp);
		for(int i=0;i<n;i++)
		    cout<< a[i].val1<<' ';
		cout<<'\n';
	     
	}
	return 0;
}

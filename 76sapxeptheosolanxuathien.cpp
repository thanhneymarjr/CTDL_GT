#include <bits/stdc++.h>
using namespace std;
struct dta{
	int val,count;
};
bool cmp(dta a,dta b)
{
	if(a.count>b.count) return true;
	if(a.count==b.count&&a.val<b.val ) return true;
	return false;
}
int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int d[100001]={0};
        dta a[n];
        for(int i=0;i<n;i++)
        {
        	cin>>a[i].val;
        	d[a[i].val]++;
		}
		for(int i=0;i<n;i++)
		    a[i].count=d[a[i].val];
		sort(a,a+n,cmp);
		for(int i=0;i<n;i++)
		    cout<<a[i].val<<' ';
		cout<<'\n';
    }
    return 0;
}

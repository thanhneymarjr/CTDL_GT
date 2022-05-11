#include <bits/stdc++.h>

using namespace std;



int main() {
    int t; cin >> t;
    while(t--) {
        int n,x,val;
        cin>>n>>x;
        int idx=0;
        for(int i=1;i<=n;i++)
        {
        	cin>>val;
        	if(val==x)
        	{
        		idx=i;
			}
		}
		cout<<idx;
		cout<<'\n';
    }
    return 0;
}

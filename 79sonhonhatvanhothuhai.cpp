#include <bits/stdc++.h>

using namespace std;
bool ok[(int)1e7+5];

int main() {
    int t; cin >> t;
    while(t--) {
    	long n;
    	cin>>n;
    	vector<long> a;
    	memset(ok,false,sizeof(ok));
    	long val;
    	for(int i=0;i<n;i++)
    	{
    		cin>>val;
    		if(!ok[val])
    		{
    			ok[val]=true;
    			a.push_back(val);
			}
		}
		if(a.size()<2) cout<<-1;
		else
		{
			sort(a.begin(),a.end());
			cout<<a[0]<<' '<<a[1];
		}
		cout<<'\n';
        
           
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t;
	cin>>t;
	queue<int> dq;
	while(t--)
	{
		string s;
		cin>>s;
		if(s=="PUSH")
		{
			int so;cin>>so;
			dq.push(so);
		}
		else if(s=="PRINTFRONT") (dq.size()>0)? cout<< dq.front()<<'\n' : cout<<"NONE\n";
		else if(s=="POP"&& dq.size()>0) dq.pop();
	}
	return 0;
}

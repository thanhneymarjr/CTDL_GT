#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		long long k;string s;
		cin>>k>>s;
		long long d[300]={0};
		priority_queue<long long,vector<long long> >q;
		for(int i=0;i<s.size();i++)
		    d[s[i]]++;
		for(int i=0;i<300;i++)
		    if(d[i]>0) q.push(d[i]);
		while(q.size()>0 && k>0)
		{
			long long top=q.top();q.pop();
			k--;
			top--;
			q.push(top);
		}
		long long res=0;
		while(q.size()>0)
		{
			res+=q.top()*q.top();
			q.pop();
		}
		cout<<res<<'\n';
	}
	return 0;
}

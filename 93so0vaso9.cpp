#include<bits/stdc++.h>
using namespace std;

string Solve(int n)
{
	queue<string> q;
	q.push("9");
	while(q.size()>0)
	{
		string res=q.front();q.pop();
		long long tmp=0;
		for(int i=0;i<res.size();i++)
		{
			tmp=10*tmp+(int)(res[i]-'0');
			tmp%=n;
		}
		if(tmp==0)
		    return res;
		q.push(res+"0");
		q.push(res+"9");
	}
}
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<< Solve(n)<<'\n';
	}
	return 0;
}

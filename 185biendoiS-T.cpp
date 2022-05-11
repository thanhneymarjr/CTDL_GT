#include<bits/stdc++.h>
using namespace std;

struct dta{
	int val;
	int dem;
};
int Res(int a,int b)
{
	set<int> s;
	s.insert(a);
	queue<dta> q;
	q.push({a,0});
	while(q.size()>0)
	{
		dta tmp=q.front();q.pop();
		if(tmp.val==b) return tmp.dem;
		if(tmp.val*2==b|| tmp.val-1==b) return tmp.dem+1;
		
		if(s.find(tmp.val*2)==s.end()&&tmp.val<b)
		{
			q.push({tmp.val*2,tmp.dem+1});
			s.insert(tmp.val*2);
		}
		if(tmp.val-1>0 && s.find(tmp.val-1)==s.end())
		{
			q.push({tmp.val-1,tmp.dem+1});
			s.insert(tmp.val-1);
		}
	}
}


int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t,a,b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		cout<<Res(a,b)<<endl;
		
		   
	}
	return 0;
}

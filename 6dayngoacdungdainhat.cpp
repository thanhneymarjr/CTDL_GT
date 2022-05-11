#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin>> t;
	while(t--)
	{
		string s;
		cin>>s;
		int n=s.size();
		int res=0;
		stack<int> stk;
		stk.push(-1);
		
		for(int i=0;i<n;i++)
		{
			if(s[i]=='(')
			    stk.push(i);
			else
			{
				stk.pop();
				if(stk.size()>0)
				    res=max(res,i-stk.top());
				if(stk.size()==0) stk.push(i);
			}
		}
		cout<<res<<'\n';
	}
	return 0;
}

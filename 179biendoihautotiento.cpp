#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		stack<string> stk;
		int len=s.size();
		for(int i=0;i<len;i++)
		{
			if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='%' || s[i]=='^')
			{
				string a=stk.top();stk.pop();
				string b=stk.top();stk.pop();
				string tmp=s[i]+b+a;
				stk.push(tmp);
			}
			else stk.push(string(1,s[i]));
		}
		cout<<stk.top()<<'\n';
	}
	return 0;
}


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
		for(int i=s.size()-1;i>=0;i--)
		{
			if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='%' || s[i]=='^')
			{
				string fi=stk.top();stk.pop();
				string se=stk.top();stk.pop();
				string tmp="("+fi+s[i]+se+")";
				stk.push(tmp);
			}
			else stk.push(string(1,s[i]));
		}
		cout<<stk.top()<<'\n';
	}
	return 0;
}

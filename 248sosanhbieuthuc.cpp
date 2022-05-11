#include<bits/stdc++.h>
using namespace std;
string bt(string s)
{
	stack<int> stk;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='(') stk.push(i);
		else if(s[i]==')')
		{
			if(stk.size()>0)
			{
				int top=stk.top();stk.pop();
				if(top==0) continue;
				else if(s[top-1]=='+') continue;
				else if(s[top-1]=='-')
				{
					for(int j=top;j<=i;j++)
					{
						if(s[j]=='+') s[j]='-';
						else if(s[j]=='-') s[j]='+';
					}
				}
			}
		}
	}

    string str="";
    for(int i=0;i<s.size();i++)
        if(s[i]!='('&&s[i]!=')')
            str+=s[i];
    return str;
}
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		string s1,s2;
		cin>>s1>>s2;
		s1=bt(s1);
		s2=bt(s2);
		if(s1==s2) cout<<"YES";
		else cout<<"NO";
		cout<<'\n';
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin>> t;
	string s;
	int n;
	stack<int> stk;
	
	while(t--)
	{
		cin>>s;
		if(s=="PUSH")
		{
			cin>>n;
			stk.push(n);		
		}
		else if(s=="POP" && stk.size()>0) stk.pop();
		else if(s=="PRINT")
		{
			if(stk.size()==0) cout<<"NONE\n";
			else cout << stk.top()<< '\n';
		}
	}
	
	return 0;

}

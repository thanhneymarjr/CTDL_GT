#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
    {
    	string s,bin=" ";
    	cin>> s;
    	bin = s[0];
    	for(int i=1;i<s.size();i++)
    	{
    		int n= bin.size()-1;
    		if(bin[n] != s[i]) bin +="1";
    		else bin += "0";
			
		}
		cout<<bin << endl;
	}
	return 0;
}


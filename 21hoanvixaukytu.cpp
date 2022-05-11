#include<bits/stdc++.h>
using namespace std;
string s;
int a[100];
bool chuaxet[100];
void Try(int i)
{
	for(int j=0;j<s.size();j++)
	{
		if(!chuaxet[j])
		{
			a[i]=j;
			chuaxet[j]=true;
			if(i==s.size())
			{
				for(int l=1;l<=s.size();l++)
				    cout << s[a[l]];
				cout << " ";    
			}
			else Try(i+1);
			chuaxet[j]=false;
	    }
    }
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
	{
		cin>> s;
		memset(chuaxet,false,sizeof(chuaxet));
		sort(s.begin(),s.end());
		Try(1);
		cout<< '\n';
	}

	return 0;
}

#include<bits/stdc++.h> 
using namespace std;
int  Array_Data[100];
int Input_data(int n, int Array_Data[])
{	
	for(int j = 1; j <= n; j++)
	{
		if(Array_Data[j] == 1)
			cout << "B"; 
		else
			cout << "A";
	}
	cout << " ";
 
	int i = n ;
	while(i > 0 && Array_Data[i] == 1) 
	{
		Array_Data[i] = 0;
		i--;
	}
	if(i>0)
	{
		Array_Data[i] = 1;
		
	}
	else
		return 1;	
	return 0;
}
 
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--)
	{
		int n, flag_stop;
		cin >> n;
		for(int i = 1; i <= n; i++)
			Array_Data[i] = 0;
			
		while(!Input_data(n,Array_Data));
		cout << endl;
	}
 
	return 0;
}

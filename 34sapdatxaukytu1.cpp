#include<bits/stdc++.h>
using namespace std;

int t,n;
string a;

int check(){
	n = a.size();
	int count[26] = {0};
	
	for(int i = 0 ; i < n; i++ ) count[ a[i] - 'a' ]++; 
	
	int max = count[0]; 
	for(int i = 0 ; i < 26 ;i++){
		if ( count[i] > max  )  max = count[i];
	}
	
	if( n%2 == 0 ) {
		if( max <= n/2 ) return 1;
		else return -1;
	}
	else { 
		if( max <= (n/2 + 1) ) return 1;
		else return -1;
	}
}


int main(){
	cin >> t;
	while(t--){
		cin >> a;
		cout << check() << endl;
	}
}

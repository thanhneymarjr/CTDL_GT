#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
	int n;
	cin>>n;
	vector<int> A(n+1);
	vector<int> even,odd;
	for(int i=1;i<=n;i++){
		cin>>A[i];
		if(i %2==0){
			even.push_back(A[i]);
		}
		else odd.push_back(A[i]);
	}
	sort(even.begin(),even.end());
	sort(odd.begin(),odd.end());
	int pos_odd=0,pos_even=(int)even.size()-1;
	for(int i=1;i<=n;i++){
		if(i%2==1){
			cout<<odd[pos_odd]<<" ";
			pos_odd++;
		}
		else{
			cout<<even[pos_even]<<" ";
			pos_even--;
		}
	}
	cout<<endl;
	
}
int main(){


	 int test=1;
	//cin>>test;
	 while(test--) solve();
}


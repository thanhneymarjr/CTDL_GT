#include<bits/stdc++.h>
using namespace std;
int len=0;
int A[50]={},n;

vector<string> ans;
string s;

void backTrack(int index){
	for(int i=A[index-1]+1;i<=n;i++){
		A[index]=i;
		if(index==len){
			string str;
			for(int i=1;i<=len;i++) str.push_back(s[A[i]-1]);
			ans.push_back(str);
		}else backTrack(index+1);
		
	}
}
void solve(){
	ans.clear();
	
	cin>>n>>s;
	for(int i=1;i<=n;i++){
		len=i;
		backTrack(1);
	}
	sort(ans.begin(),ans.end());
	for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
	cout<<endl;
	
}
int main(){
	int test=1;
	cin>>test;
	while(test--) solve();


	
}


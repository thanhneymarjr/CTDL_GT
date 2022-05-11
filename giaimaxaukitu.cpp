#include<bits/stdc++.h>
using namespace std;

int toInt(string s){
	int res=0;
	for(int i=0;i<s.length();i++) res=res*10+s[i]-'0';
	return res;
}


void solve(){
	
	string s;
	cin>>s;
	
	stack<int> rep;
	stack<string> stc;
	for(int i=0;i<s.length();++i){
		if(s[i]=='['){
			stc.push("[");
			string str_number;
			
			int index=i-1;
			while(index>=0 && s[index]>='0' && s[index]<='9'){
				str_number=s[index]+str_number;
				index--;
			}
			int number_repeat;
			if(str_number.empty()) number_repeat=1;
			else number_repeat=toInt(str_number);
			
			rep.push(number_repeat);
			
		}
		else if(s[i]==']'){
			string str_repeat;
			while(!stc.empty() && stc.top()!="["){
				str_repeat=stc.top()+str_repeat;
				stc.pop();
			}
			if(!stc.empty()) stc.pop();
			int num=rep.top();rep.pop();
			string new_string;
			while(num--){
				new_string +=str_repeat;
			}
			stc.push(new_string);
			
		}
		else if(s[i]>='0' && s[i]<='9')  continue;
		else  stc.push(string(1,s[i]));
			
	}
	string ans;
	while(!stc.empty()){
		
		ans=stc.top()+ans;
		stc.pop();
		
	}
	cout<<ans<<endl;
		
}
	
	
	
	

int main(){
	int test=1;
	cin>>test;
	cin.ignore();
	while(test--) solve();


	
}


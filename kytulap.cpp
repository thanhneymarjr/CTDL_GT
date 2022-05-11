#include<bits/stdc++.h>


using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef double ld;
typedef vector<int> vi;
typedef vector<long> vl;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;

const double pi=2*acos(0);
const ll inf  = LLONG_MAX;
const ll ninf = LLONG_MIN;

void xuat (int a[],int n){
	for(int i=1;i<=n;i++) cout<<a[i];
	cout<<endl;
}
 
int dem(string a, string b){
	int count=0;
	for (int i=0;i<a.length();i++){
		for (int j=0;j<b.length();j++){
			if (a[i]==b[j]){
//				cout<<a[i]<<" "<<b[j]<<endl;
				count++;
			}
		}
	}
	return count;
}

void sinhhv(int a[],int check[],int n, int j, string s[], vi &ds){
	for (int i=1;i<=n;i++){
		if (check[i]==0){
			check[i]=1;
			a[j]=i;
			if (j==n){
//				xuat(a,n);
				int count=0;
				for(int k=1;k<n;k++){
					count+=dem(s[a[k]],s[a[k+1]]);
				}
				ds.push_back(count);
			}
			else sinhhv(a,check,n,j+1,s,ds);
			check[i]=0;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int n;
	cin>>n;
	int a[n+1];
	string s[n+1];
	for(int i=1;i<=n;i++){
		cin>>s[i];	
	}
	int check[n+1]={0};
	vi ds;
	sinhhv(a,check,n,1,s,ds);
	sort(ds.begin(),ds.end());
	cout<<ds[0];
	
return 0;
}


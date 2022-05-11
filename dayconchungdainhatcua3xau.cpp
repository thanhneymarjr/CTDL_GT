#include<bits/stdc++.h>
using namespace std;

int C[105][105][105];
int tinh(string s1,string s2,string s3,int m,int n,int p){
	int i,j,k;
	for(i=1;i<=m;i++)
	    for(j=1;j<=n;j++)
	        for(k=1;k<=p;k++)
	            if(s1[i-1] == s2[j-1] && s2[j-1] ==s3[k-1])
	                C[i][j][k]=C[i-1][j-1][k-1]+1;
	            else
				    C[i][j][k]=max(max(C[i-1][j][k],C[i][j-1][k]),C[i][j][k-1]);
	return C[m][n][p];
}

int main ()
{
    int t;string s1,s2,s3;int n,m,p;
    cin>>t;
    while(t--)
    {
    	cin>>n>>m>>p;
    	cin>>s1>>s2>>s3;
    	cout<<tinh(s1,s2,s3,n,m,p)<<endl;
        
    }
}

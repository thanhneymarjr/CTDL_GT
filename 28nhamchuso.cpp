#include<bits/stdc++.h>
using namespace std;
int chuyen(string s){
    long long sum=0;
    long long mu=0;
    for(long long i=s.size()-1; i>= 0;i--){
        sum=sum+((s[i]-48)*pow(10,mu));
        mu++;
    }
    return sum;
 
}
 
int main(){
    int i;
    string s1,s2;
    cin>>s1>>s2;
    for(i=0;i<s1.size();i++){
        if(s1[i]=='6')
            s1[i]='5';
    }
    for(i=0;i<s2.size();i++){
        if(s2[i]=='6')
            s2[i]='5';
    }
    cout<<chuyen(s1)+chuyen(s2)<<" ";
    for(i=0;i<s1.size();i++){
        if(s1[i]=='5')
            s1[i]='6';
    }
    for(i=0;i<s2.size();i++){
        if(s2[i]=='5')
            s2[i]='6';
    }
    cout<<chuyen(s1)+chuyen(s2);
   
    return 0;
}

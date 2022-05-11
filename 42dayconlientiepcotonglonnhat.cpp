#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,*a;
ll sum_left(ll a[],ll i,ll j) {
    ll sum=0;
    ll Max2=INT_MIN;
    for(ll k=j;k>=i;k--) {
        sum+=a[k];
        if(sum > Max2) Max2=sum;
    }
    return Max2;
}
ll sum_right(ll a[],ll i,ll j) {
    ll sum=0;
    ll Max1=INT_MIN;
    for(ll k=i;k<=j;k++) {
        sum+=a[k];
        if(sum > Max1) Max1=sum;
    }
    return Max1;
}
ll searching(ll a[],ll low,ll high) {
    if(low==high) return a[low];
    ll mid=(low + high)/2;
    ll temp1 = sum_left(a,low,mid);
    ll temp2 = sum_right(a,mid+1,high);
    ll temp3 = sum_left(a,low,mid)+sum_right(a,mid+1,high);
    return max(max(searching(a,low,mid),searching(a,mid+1,high)),temp3);
}
int main() {
    int T;
    cin>>T;
    while(T--) {
 
        cin>>n;
        a=new ll[n];
        for(ll i=0;i<n;i++) {
            cin>>a[i];
        }
         searching(a,0,n-1);
        cout<<searching(a,0,n-1)<<endl;

    }
    return 0;
}

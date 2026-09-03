#include <bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int q;
cin>>q;
while(q--){
    long long n;
    cin>>n;
    long long k;
    cin>>k;
    long long ans;
    if(k==n) ans=1;
    else{
        ans=ceil((double)n/k);
        ans=ans*k;
        ans=ceil((double)ans/n);
    }
    cout<<ans<<endl;
}
}
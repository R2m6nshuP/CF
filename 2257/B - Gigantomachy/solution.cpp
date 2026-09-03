#include <bits/stdc++.h>
using namespace std;
string modify(int k,string s){
    string ans="";
    while(k--) ans+=s;
    return ans;
}
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int q;
cin>>q;
while(q--){
    int n,m,a1,b1;
    cin>>n>>m;
    int i=n-1;
    cin>>a1;
    int k;
    while(i--) cin>>k;
    cin>>b1;
    i=m-1;
    while(i--) cin>>k;
    if(a1+n-1==b1+m-1) cout<<1;
    else {
        if(a1+n-1>b1+m-1) cout<<1;
        else cout<<2;
    }
    cout<<endl;
}
}
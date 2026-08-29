#include <bits/stdc++.h>
using namespace std;
int gcdi(int n,int m){
    if(m==0) return n;
    return gcdi(m,n%m);
}
 
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int t;
cin>>t;
while(t--){
    int n;
cin>>n;
int a,b;
int i=n;
while(i--){
int k;
cin>>k;
if(i==n-1) a=k;
if(i==0) b=k;
}
cout<<gcdi(a,b)<<endl;
}
 
}
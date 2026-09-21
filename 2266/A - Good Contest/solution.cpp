#include <bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int mi,k;
    mi=INT_MAX;
    int j=3;
    while(j--){
        cin>>k;
        mi=min(mi,k);
    }
    cout<<n-mi<<endl;
}
}
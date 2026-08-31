#include <bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int n;
cin>>n;
while(n--){
    long long  a,b,k;
    cin>>a>>b>>k;
    if(k%2==0) cout<<(a-b)*(k/2);
    else {
        cout<<(a-b)*(k/2)+a;
    }
    cout<<endl;
}
}
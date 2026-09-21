#include <bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int t;
cin>>t;
while(t--){
    long long a,b,c;
    cin>>a>>b>>c;
    long long ans;
    if(a>b){
        ans=(a-b)+c;
    }
    else if(b>a){
        if(c>2*(b-a)){
            ans=(a-b)+c;
        }
        else ans=b-a;
    }
    else {
        ans=c;
    }
    cout<<ans<<endl;
}
}
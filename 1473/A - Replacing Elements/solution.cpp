#include <bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int q;
cin>>q;
while(q--){
    int n,d,cnt=0;
    cin>>n>>d;
    int i=n;
    int min1=INT_MAX,min2=INT_MAX;
    string ans="NO";
    while(i--) {
        int k;
        cin>>k;
        if(k>d) cnt++;
        if(k<min1) {
            min2=min1;
            min1=k;
        }
        else if(k<min2){
            min2=k;
        }
    }
    if(cnt==0 || (min1+min2<=d)) ans="YES";
    cout<<ans<<endl;
}
}
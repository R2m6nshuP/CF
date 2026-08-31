#include <bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int n;
cin>>n;
while(n--){
    string ans="";
    int t,k;
    cin>>t>>k;
    int i=0;
    while(t--){
        if(i==k) i=0;
        ans+='a'+i;
        i++;
    }
    cout<<ans<<"
";
}
}
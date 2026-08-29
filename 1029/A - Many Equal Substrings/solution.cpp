#include <bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int n,m;
cin>>n>>m;
string t;
cin>>t;
string ans=t;
--m;
int done=m;
for(int pos=1;pos<n;pos++){
    bool ok=1;
    int len=0;
    for(int i=0;i<n;i++){
        if(pos+i>=n) break;
        if(t[pos+i]!=t[i]) {
            ok=0;
            break;
        } 
        else len++;
    }
    if(ok){
        while(m--) {
            ans+=t.substr(len);
            done--;
        }
        break;
    }
}
while(done--) ans+=t;
cout<<ans;
}
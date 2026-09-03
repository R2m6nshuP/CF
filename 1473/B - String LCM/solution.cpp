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
    string s,t;
    cin>>s>>t;
    if(t.size()<s.size()) swap(s,t);
    string ans="-1";
    if(t.size()%s.size()==0) {
        s=modify(t.size()/s.size(),s);
        if(s==t) ans=t;
    }
    else {
        s=modify(lcm(s.size(),t.size())/s.size(),s);
        t=modify(lcm(s.size(),t.size())/t.size(),t);
        if(s==t) ans=s;
    }
    cout<<ans<<endl;
}
}
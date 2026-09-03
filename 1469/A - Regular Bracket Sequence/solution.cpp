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
    string ans="YES";
    string t;
    cin>>t;
    int sz=t.size();
    int bal=0,minbal=0;
    if(sz%2==1 || t[0]==')' || t[sz-1]=='(') ans="NO";
    else{
        int cnt=sz/2-1;
        for(int i=0;i<sz;i++){
            if(t[i]=='?') {
                if(cnt>0){
                    cnt--;
                    t[i]='(';
                }
                else t[i]=')';
            }
        }
        for(int i=0;i<sz;i++){  
            if(t[i]=='(') {
                bal++;
            }
            else bal--;
            minbal=min(minbal,bal);
        }
    }
    if(bal!=0 || minbal<0) ans="NO";
    cout<<ans<<endl;
}
}
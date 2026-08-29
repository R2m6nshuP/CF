#include <bits/stdc++.h>
using namespace std;
 
int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);
vector<int> mp(31,0);
int n,q;
cin>>n>>q;
while(n--) {
    int k;
    cin>>k;
    mp[__builtin_ctz(k)]++;
}
while(q--){
    int cnt;
    cin>>cnt;
    int ans=0;
    for(int i=30;i>=0 && cnt>0;i--){
        int need=min(cnt>>i,mp[i]);
        ans+=need;
        cnt-=need*(1<<i);
    }
    if(cnt>0) ans=-1;
    cout<<ans<<"
";
    }
}
#include <bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    int cnt=n;
    map<int,int> mp;
    while(n--) {
        int k;
        cin>>k;
        mp[k]++;
        if(k%2==0) mp[k/2]+=0;
    }
    auto it =mp.begin();
    int ans=0;
    while(it!=mp.end() ){
        if(it->first>m) break;
        ans=max(ans,cnt+mp[it->first*2]);
        cnt-=it->second;
        it++;
    }
    cout<<ans<<"
";
}
}
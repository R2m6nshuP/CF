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
    unordered_map<int,int> mp;
    int mode=INT_MIN;
    int maxfreq=INT_MIN;
    long long sum=0;
    int o=n;
    while(n--){
        int a;
        cin>>a;
        mp[a]++;
        if(mp[a]>maxfreq){
            maxfreq=mp[a];
            mode=a;
        }
        sum+=a;
    }
    o-=maxfreq;
    long long ans=sum-mode*maxfreq*1LL+1LL*min(o+2,maxfreq)*mode;
    cout<<ans<<endl;
}
}
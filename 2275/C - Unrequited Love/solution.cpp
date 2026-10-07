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
    vector<int> love(n);
    for(int i=0;i<n;i++){
        cin>>love[i];
    }
    map<long long,int> mp;
    long long ans=0;
    for(int i=0;i<n-4;i++){
        long long sum=love[i]+love[i+2]-love[i+4];
        mp[sum]++ ;
    }
    for(auto &[s,fq] : mp){
        long long k=(1LL*fq*(fq-1))/2;
        ans+=k;
    }
    for(int i=0;i<n-4;i++){
        int diff=0;
        long long org=love[i]+love[i+2]-love[i+4];
        for(int j=2;j<=4;j+=2){
        if(i+j+4>=n) break;
        long long sum=love[i+j]+love[i+2+j]-love[i+j+4];
        if(org==sum) ans--;
        }
    }
 
    cout<<ans<<endl;
}
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    vector<int> t(n);
    for(int i=0;i<n;i++) cin>>t[i];
  
    double ans=0;
    while(k<=n){
    long long poss=0;
    long long sum=0;            
    for(int i=0;i<k;i++) sum+=t[i];
    poss=sum;
    for(int i=k;i<n;i++){
        sum+=t[i]-t[i-k];
        poss=max(poss,sum);
    }
    ans=max(ans,((double)poss/k));
    k++;
}
cout<<setprecision(17) << ans;
return 0;
}
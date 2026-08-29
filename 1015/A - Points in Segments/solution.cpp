#include <bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int n,m;
cin>>n>>m;
vector<int> rg(m+1);
while(n--){
int l,r;
cin>>l>>r;
rg[l-1]++;
rg[r]--;
}
int sum=0;
vector<int> ans;
int cnt=0;
for(int i=0;i<m;i++){
    sum+=rg[i];
    if(sum==0) {
        cnt++;
        ans.push_back(i+1);
    }
}
cout<<cnt<<"
";
for(auto i: ans) cout<<i<<" ";
}
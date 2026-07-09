#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int t;
cin>>t;
vector<int> read(n);
for(int i=0;i<n;i++) cin>>read[i];
int ans=0;
int i=0,j=0;
int sum=0;
int cnt=0;
while(j<n){
if(sum+read[j]<=t){
    sum+=read[j];
    cnt++;
    j++;
}
else{
ans=max(ans,cnt);
sum-=read[i];
cnt--;
i++;
}
}
ans=max(ans,cnt);
cout<<ans;
}
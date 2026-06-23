#include <bits/stdc++.h>
using namespace std;
 
int main(){
int n;
int k;
cin>>n>>k;
unordered_set<int> ans;
vector<int> num;
for(int i=0;i<n;i++){
int l;
cin>>l;
if(ans.count(l)==0){
    ans.insert(l);
    num.push_back(i+1);
}
if(num.size()==k) break;
}
if(num.size()<k) cout<<"NO";
else{
    cout<<"YES
";
    for(int i: num) cout<<i<<" ";
 
}
 
}
#include <bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int n;
cin>>n;
int i=0;
string ans;
cin>>ans; 
int j=1;
while(i<n){
    cout<<ans[i];
    i+=j;
    j++;
}
}
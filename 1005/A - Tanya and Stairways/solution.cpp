#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    map<long long ,int> mp;
    int k;
    cin>>k;
    int counted=0;
    int prev=-1;
    vector<int> ans;
    while(k--){
        int n;
        cin>>n;
        if(n==1) counted++;
        if(n==1 && prev!=-1) ans.push_back(prev);
        prev=n;
    }
    ans.push_back(prev);
    cout<<counted<<"
";
    for( auto i : ans){
        cout<<i<<" ";
    }
 
    
     
return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int n;
cin>>n;
while(n--){
    int a,b,c;
    cin>>a>>b>>c;
    vector<int> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(v.begin(),v.end());
    cout<<min(v[2]-v[0],v[1])<<"
";
}
}
#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int k;
cin>>k;
int l=0;
int r=n-1;
vector<int> prob(n);
for(int i=0;i<n;i++) cin>>prob[i];
while( l<n  && prob[l]<=k ){
    if(prob[l]<=k) l++;
}
while( r>l && r>=0 && prob[r]<=k   ){
    if(prob[r]<=k) r--;
}
cout<<n-1-r+l;
}
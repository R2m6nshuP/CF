#include <bits/stdc++.h>
using namespace std;
void reverseencry(string &s,int r){
    int l=0;
    while(l<r){
        swap(s[l],s[r]);
        l++;
        r--;
    }
    return;
}
int main(){
int n;
cin>>n;
string s;
cin>>s;
for(int i=2;i<=n;i++){
    if(n%i==0){
    reverseencry(s,i-1);
    }
}
cout<<s;
}
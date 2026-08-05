#include <bits/stdc++.h>
using namespace std;
 
int helper(string a,string b){
if(a==b) return 0;
int n;
n=a.size()+b.size();
int A=a.size()-1;
int B=b.size()-1;
while(A>=0 && B>=0){
    if(a[A]==b[B]) {
        --A;
        --B;
        n-=2;
    }
    else{
        break;
    }
}
return n;
}
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
 
string a,b;
cin>>a>>b;
cout<<helper(a,b);
}
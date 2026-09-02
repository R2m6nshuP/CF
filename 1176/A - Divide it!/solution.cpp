#include <bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int q;
cin>>q;
while(q--){
    long long n;
    cin>>n;
    int pow2=0,pow3=0,pow5=0;
    while(n%2==0) {
        pow2++;
        n/=2;
    }
    while(n%3==0) {
        pow3++;
        n/=3;
    }
    while(n%5==0) {
        pow5++;
        n/=5;
    }
    if(n!=1) cout<<-1<<endl;
    else{
        cout<<pow2+2*pow3+3*pow5<<endl;
    }
}
}
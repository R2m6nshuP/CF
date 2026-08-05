#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,x;
    cin>>a>>b>>x;
    char A='0';
    char B='1';
    string ans="";
    string adder="";
    if(a<b) {
        swap(A,B);
        swap(a,b);
    }
    if(x%2==1){
        int i=(x+1)/2;
        while(i--){
            ans+=B;
            --b;
            --a;
            ans+=A;
        }
        while(b--){
            adder+=B;
        }
        ans=adder+ans;
        while(a--){
            ans+=A;
        }
    }
    else{
    int i=(x)/2;
        while(i--){
            ans+=B;
            --b;
            --a;
            ans+=A;
            
        }
        while(b--){
            adder+=B;
        }
        ans=A+adder+ans;
        a--;
        while(a--){
            ans+=A;
        }
    }
    cout<<ans;
return 0;
}
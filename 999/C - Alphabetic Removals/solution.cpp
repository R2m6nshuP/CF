#include <bits/stdc++.h>
using namespace std;
int finder(string &s,int start,char find){
    for(int i=start;i<s.size();i++){
        if(s[i]==find) return i;
    }
    return s.size();
}
int main(){
int n;
cin>>n;
int k;
cin>>k;
string s;
cin>>s;
int start=0;
char find='a';
if(k==n) cout<<"";
else{
while(k){
    int pos=finder(s,start,find);
    if(pos<s.size()){
        s.erase(pos,1);
        start=pos;
        --k;
    }
    else{
start=0;
find+=1;
    }
}
cout<<s;
}
}
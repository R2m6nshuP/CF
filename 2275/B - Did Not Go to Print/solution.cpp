#include <bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    deque<int> st;
    vector<bool> printed(n + 1, false);
    int cnt=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            st.push_front(i+1);
        }
        else if(s[i]=='2'){
            if(!st.empty()) {
                printed[st.front()]=1;
                st.pop_front();
            }
            else printed[i+1]=1;
            cnt++;
        }
        else{
            printed[i+1]=1;
            cnt++;
        }
 
    }
    cout<<n-cnt<<endl;
    for(int i=1;i<n+1;i++){
        if(!printed[i])cout<<i<<" ";
    }
    cout<<endl;
 
}
}
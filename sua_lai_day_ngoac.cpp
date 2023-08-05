#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
int t;cin>>t;
while(t--){
string s;cin>>s;
stack<char> st;
for(auto it:s){
    if(it=='(') st.push(it);
    else {
        if(!st.empty()&&st.top()=='(') st.pop();
        else st.push(it);
    }
}
int open=0,close=0;
while(!st.empty()){
    if(st.top()=='(') open++;
    else close++;
    st.pop();
}
int res=open/2+close/2;
res+=open%2+close%2;
cout<<res;
    cout<<endl;
}
    system("pause");
}
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
stack<int> st;
for(int i=0;i<s.size();i++){
    if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'){
        int x=st.top();
        st.pop();
        int y=st.top();
        st.pop();
if(s[i]=='+') st.push(y+x);
if(s[i]=='-') st.push(y-x);
if(s[i]=='*') st.push(y*x);
if(s[i]=='/') st.push(y/x);
    }
    else st.push(s[i]-'0');
}
cout<<st.top();
    cout<<endl;
}
    system("pause");
}
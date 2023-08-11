#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int priority(char c){
    if(c=='*'||c=='/') return 2;
    if(c=='+'||c=='-') return 1;
    return 0;
}
ll to_num(string s){
    ll num=0;
    for(int i=0;i<s.size();i++){
        num=num*10+(s[i]-'0');
    }
    return num;
}
bool isOperator(string s){
    return (s=="+"||s=="-"||s=="*"||s=="/");
}
int main(){
ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
int t;cin>>t;
while(t--){
string s;cin>>s;
vector<string> v;
stack<char> st;
for(int i=0;i<s.size();i++){
    if(isdigit(s[i])){
        string num="";
        while(isdigit(s[i])&&i<s.size()){
            num+=s[i];
            i++;
        }
        i--;
        v.push_back(num);
    }
    else if(s[i]=='('){
        st.push(s[i]);
    }
    else if(s[i]==')'){
        while(st.top()!='('){
            v.push_back(string(1,st.top()));
            st.pop();
        }
        st.pop();
    }
    else {
while(!st.empty()&&(priority(st.top())>=priority(s[i]))){
    v.push_back(string(1,st.top()));
    st.pop();
}
st.push(s[i]);
    }
}
while(!st.empty()){
    v.push_back(string(1,st.top()));
    st.pop();
}
stack<ll> stk;
for(int i=0;i<v.size();i++){
    if(isOperator(v[i])) {
        ll x=stk.top(); stk.pop();
        ll y=stk.top(); stk.pop();
        if(v[i]=="+") stk.push(y+x);
        if(v[i]=="-") stk.push(y-x);
        if(v[i]=="*") stk.push(y*x);
        if(v[i]=="/") stk.push(y/x);
    }
     else{
        stk.push(to_num(v[i]));
    }
}
cout<<stk.top();
    cout<<endl;
}
    
    system("pause");
}
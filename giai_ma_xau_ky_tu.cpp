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
stack<string> st;
for(int i=s.size()-1;i>=0;i--){
    if(s[i]==']') st.push(string(1,s[i]));
    else if(s[i]=='['){
        string res="";
        while(st.top()!="]"){
            res+=st.top();
            st.pop();
        }
        st.pop();
        st.push(res);
    }
    else if(isdigit(s[i])){
        string ans="";
        while(i>=0&&isdigit(s[i])){
            ans=string(1,s[i])+ans;
            i--;
        }
        i++;
ll num=stoll(ans);
string x="";
for(int i=0;i<num;i++){
    x+=st.top();
}
st.pop();
st.push(x);
    }
else st.push(string(1,s[i]));
}
string str="";
while(!st.empty()){
    str+=st.top();
    st.pop();
}
cout<<str;
    cout<<endl;
}
    system("pause");
}
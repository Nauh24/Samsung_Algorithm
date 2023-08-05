#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int pri(char x){
    if(x=='^') return 3;
    else if(x=='*'||x=='/') return 2;
    else if(x=='+'||x=='-') return 1;
    else return 0;
}
int main(){
ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
int t;cin>>t;
while(t--){
string s;cin>>s;
stack<char> st;
string res="";
for(int i=0;i<s.size();i++){
    if(s[i]=='('){
        st.push(s[i]);
    }
    else if(s[i]==')'){
        while(st.top()!='('){
            res+=st.top();
            st.pop();
        }
        st.pop();
    }
    else if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^'){
        while(!st.empty()&&pri(st.top())>=pri(s[i])){
            res+=st.top();
            st.pop();
        }
        st.push(s[i]);
    }
    else res+=s[i];
}
while(!st.empty()){
    res+=st.top();
    st.pop();
}
cout<<res;
    cout<<endl;
}
    system("pause");
}
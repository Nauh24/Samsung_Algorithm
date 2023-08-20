#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
int t;cin>>t;
while(t--){
int n;cin>>n;
queue<string> q;
q.push("6");
q.push("8");
stack<string> st;
while(1){
    string x=q.front();
    q.pop();
    if(x.size()<=n) st.push(x);
    else break;
    q.push(x+"6");
    q.push(x+"8");
}
cout<<st.size()<<endl;
while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
}
    cout<<endl;
}
    system("pause");
}
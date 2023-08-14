#include<bits/stdc++.h>
using namespace std;
int main(){
int t;cin>>t;
while(t--){
int n;cin>>n;
vector<int> v;
priority_queue<int,vector<int>,greater<int>> q1,q2;
int sum=0;
for(int i=1;i<=n;i++){
    int x;
    cin>>x;
    sum+=x;
    if(x%3==0) v.push_back(x);
    else if(x%3==1) q1.push(x);
    else q2.push(x);
}
int ok=1;
if(sum%3==1){
    if(q1.size()>=1) q1.pop();
    else if(q2.size()>=2){
        q2.pop();
        q2.pop();
    }
    else ok=0;
}
else if(sum%3==2){
 if(q2.size()>=1) q2.pop();
 else if(q1.size()>=2) {
    q1.pop();
    q1.pop();
 }
    else ok=0;
}
if(ok==0) {
    cout<<-1;
    break;
}
while(!q1.empty()){
    v.push_back(q1.top());
    q1.pop();
}
while(!q2.empty()){
    v.push_back(q2.top());
    q2.pop();
}
sort(v.rbegin(),v.rend());
if(v.size()==0) cout<<-1;
else for(auto it:v) cout<<it;
    cout<<endl;
}
    system("pause");
}
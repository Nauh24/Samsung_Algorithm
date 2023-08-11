#include<bits/stdc++.h>
using namespace std;
#define ll long long 
bool check(ll n){
    string s=to_string(n);
    set<int> se;
    for(int i=0;i<s.size();i++) se.insert(s[i]);
    return se.size()==s.size();
} 
int main(){
ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
int t;cin>>t;
while(t--){
int l,r;
cin>>l>>r;
queue<ll> q;
for(int i=1;i<=5;i++) q.push(i);
vector<int> v;
int cnt=0;
while(1){
ll x=q.front();
q.pop();
if(x>r) break;
if(x>=l&&check(x)){
  //  cout<<x<<" ";
   cnt++; 
} 
for(int i=0;i<=5;i++){
    q.push(x*10+i);
}
}
cout<<endl;
cout<<cnt;
    cout<<endl;
}
    system("pause");
}
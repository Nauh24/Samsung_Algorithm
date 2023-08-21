#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll mod=1e9+7;
int main(){
ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
int t;cin>>t;
while(t--){
ll n;cin>>n;
ll a[n];

priority_queue<ll,vector<ll>,greater<ll>> q;
for(ll i=0;i<n;i++){
    cin>>a[i];
    q.push(a[i]);
}
ll sum=0;
while(q.size()>1){
    ll x=q.top(); q.pop();
    ll y=q.top(); q.pop();
    ll z=(x+y)%mod;
    sum=(sum+z)%mod;
    q.push(z);
}
cout<<sum;
    cout<<endl;
}
    system("pause");
}
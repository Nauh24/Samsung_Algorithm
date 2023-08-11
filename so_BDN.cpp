#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
int t;cin>>t;
while(t--){
int n;cin>>n;
queue<ll> q;
q.push(1);
while(1){
    ll x=q.front();
    q.pop();
    if(x%n==0) {
        cout<<x<<endl;
        break;
    }
q.push(x*10+0);
q.push(x*10+1);
}
    cout<<endl;
}
    system("pause");
}
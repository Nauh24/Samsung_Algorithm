#include<bits/stdc++.h>
using namespace std;
#define ll long long 
bool check(string a,string b){
    int idx=0;
    for(int i=0;i<b.size();i++){
        if(a[idx]==b[i]){
            idx++;
        }
    }
    if(idx==a.size()) return true;
    else return false;
}
int main(){
int t;cin>>t;
while(t--){
ll n;cin>>n;
ll x=cbrt(n);
int ok=0;
for(int i=x;i>=1;i--){
    ll z=pow(i,3);
if(check(to_string(z),to_string(n))){
    ok=1;
    cout<<z<<endl;
    break;
}
}
if(ok==0) cout<<-1;
    cout<<endl;
}
    system("pause");
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int n;
vector<vector<int>> res;
vector<int> v;
int a[16];
bool snt(int n){
    if(n<2) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
void solve(){
int sum=0;
for(auto it:v){
    sum+=it;
}
if(snt(sum)) res.push_back(v);
}
void Try(int i){
   for(int j=0;j<=1;j++){
    if(j==1) v.push_back(a[i]);
    if(i==n-1) solve();
    else Try(i+1);
    if(j==1) v.pop_back();
   }
}
int main(){
ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
int t;cin>>t;
while(t--){
cin>>n;
v.clear();
res.clear();
for(int i=0;i<n;i++) {
    cin>>a[i];
}
sort(a,a+n,greater<int>());
Try(0);
for(auto it:res){
    for(auto x:it) cout<<x<<" ";
    cout<<endl;
}
    cout<<endl;
}
    system("pause");
}
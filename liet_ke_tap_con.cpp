#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
string s;
int a[17];
set<string> res;
void solve(){
string ans="";
for(int i=0;i<n;i++){
    if(a[i]==1) ans+=(s[i]);
}
res.insert(ans);
}
void Try(int i){
for(int j=0;j<=1;j++){
    a[i]=j;
    if(i==n-1) {
        solve();
    }
    else Try(i+1);
}
} 
int main(){
int t;cin>>t;
while(t--){
cin>>n;
cin>>s;
res.clear();
Try(0);
for(auto it:res) cout<<it<<" ";
    cout<<endl;
}
    system("pause");
}
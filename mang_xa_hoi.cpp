#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int> v[100001];
int main(){
    int t;cin>>t;
    while(t--){
cin>>n>>m;
for(int i=1;i<=n;i++) v[i].clear();
while(m--){
    int x,y;
    cin>>x>>y;
    v[x].push_back(y);
    v[y].push_back(x);
}
int ok=1;
for(int i=1;i<=n;i++){
for(auto x:v[i]){
    if(v[i].size()!=v[x].size()){
        ok=0;
        break;
    }
}
if(!ok) break;
}
if(ok==1) cout<<"YES";
else cout<<"NO";
        cout<<endl;
    }
    system("pause");
}
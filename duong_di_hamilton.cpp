#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m;
bool used[1001];
vector<int> v[1001];
int ok;
void dfs(int i,int cnt){
if(cnt==n){
    ok=1;
    return ;
}
for(auto it:v[i]){
    if(!used[it]){
        used[it]=true;
dfs(it,cnt+1);
        used[it]=false;
    }
}
}
int main(){
int t;cin>>t;
while(t--){
cin>>n>>m;
for(int i=1;i<=n;i++) v[i].clear();
memset(used,false,sizeof(used));
while(m--){
    int x,y;
    cin>>x>>y;
v[x].push_back(y);
v[y].push_back(x);
}
ok=0;
for(int i=1;i<=n;i++){
    used[i]=true;
    dfs(i,1);
    if(ok==1){
        cout<<1;
        break;
    }
}
if(ok==0) cout<<0;
    cout<<endl;
}
    system("pause");
}
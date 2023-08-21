#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int n,m;
vector<int> v[1001];
bool vs[1001];
void dfs(int u){
    vs[u]=true;
    for(auto it:v[u]){
        if(!vs[it]){
            dfs(it);
        }
    }
}
int main(){
ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
int t;cin>>t;
while(t--){
    cin>>n>>m;
memset(vs,false,sizeof(vs));
for(int i=1;i<=n;i++) v[i].clear();
while(m--){
    int x,y;
    cin>>x>>y;
v[x].push_back(y);
v[y].push_back(x);
}
vector<int> res;
for(int i=1;i<=n;i++){
    memset(vs,false,sizeof(vs));
    vs[i]=true;
    int cnt=0;
    for(int j=1;j<=n;j++){
        if(!vs[j]){
            cnt++;
            dfs(j);
        }
    }
if(cnt!=1) res.push_back(i);

}
cout<<res.size()<<endl;
for(auto it:res) cout<<it<<" ";
    cout<<endl;
}
    system("pause");
}
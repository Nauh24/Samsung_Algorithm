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
dfs(1);
for(int i=1;i<=n;i++){
    if(!vs[i]) res.push_back(i);
}
if(res.size()==0) cout<<0;
for(auto it:res){
    cout<<it<<endl;
}
    cout<<endl;

    system("pause");
}
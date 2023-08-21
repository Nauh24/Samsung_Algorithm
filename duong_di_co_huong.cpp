#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int n,m;
int u,v;
vector<int> vi[1001];
bool used[1001];
int parent[1001];
void bfs(int u){
    queue<int> q;
    q.push(u);
    used[u]=true;
    while(!q.empty()){
        int x=q.front();
        q.pop();
        for(auto it:vi[x]){
            if(!used[it]){
                q.push(it);
                used[it]=true;
                parent[it]=x;
            }
        }
    }
}
void Trace (int u,int v){
    bfs(u);
    if(!used[v]) cout<<-1<<endl;
    else{
        vector<int> trace;
        while(v!=u){
            trace.push_back(v);
            v=parent[v];
        }
        trace.push_back(u);
        reverse(trace.begin(),trace.end());
        for(int i=0;i<trace.size();i++){
            cout<<trace[i];
            if(i!=trace.size()-1) cout<<" -> ";
        }
    }
}
int main(){
ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
int t;cin>>t;
while(t--){
cin>>n>>m>>u>>v;
memset(used,false,sizeof(used));
memset(parent,0,sizeof(parent));
for(int i=1;i<=n;i++) vi[i].clear();
while(m--){
    int x,y;
    cin>>x>>y;
vi[x].push_back(y);
}
Trace(u,v);
    cout<<endl;
}
    system("pause");
}
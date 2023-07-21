#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int> v[1001];
bool vs[1001];
vector<pair<int,int>> edge;
void dfs(int u){
	vs[u]=true;
	for(auto it:v[u]){
		if(!vs[it]) dfs(it);
	}
}
void dfs2(int u,int x,int y){
	vs[u]=true;
	for(auto it:v[u]){
		if((u==x&&it==y)||(u==y&&it==x)) continue;
		if(!vs[it]) dfs2(it,x,y);
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n>>m;
		memset(vs,false,sizeof(vs));
		for(int i=1;i<=n;i++) v[i].clear();
		edge.clear();
		while(m--){
			int x,y;
			cin>>x>>y;
			v[x].push_back(y);
			v[y].push_back(x);
			edge.push_back({x,y});
		}
		int lt=0;
		for(int i=1;i<=n;i++){
			if(!vs[i]) {
				lt++;
				dfs(i);
			}
		}
	
		for(auto it:edge) {
			int x=it.first;
			int y=it.second;
		int dem=0;
		memset(vs,false,sizeof(vs));
		for(int i=1;i<=n;i++){
			if(!vs[i]){
				dem++;
				dfs2(i,x,y);
			}
		}
		if(dem>lt) cout<<x<<" "<<y<<" ";
		}
		
		cout<<endl;
	}
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m,u,s;
vector<int> v[1001];
bool used [1001];
int parent[1001];
void dfs(int u){
	used[u]=true;
	for(auto it:v[u]) if(!used[it]){
		parent[it]=u;
		dfs(it);
		
	} 
}
void trace(int u,int s){
	dfs(u);
	if(!used[s]) cout<<-1<<endl;
	else{
		vector<int> vi;
		while(s!=u){
			vi.push_back(s);
			s=parent[s];
		}
		vi.push_back(u);
		reverse(vi.begin(),vi.end());
		for(auto it:vi) cout<<it<<" ";
	}
}
int main(){
int t;cin>>t;
while(t--){
	cin>>n>>m>>u>>s;
	memset(used,false,sizeof(used));
	for(int i=1;i<=n;i++) v[i].clear();
	while(m--){
		int x,y;
		cin>>x>>y;
		v[x].push_back(y);
	}
	trace(u,s);
	cout<<endl;
}

}


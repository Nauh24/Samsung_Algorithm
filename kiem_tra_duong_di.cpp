#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m;
vector<int> vi[1001];
bool used[1001];
void dfs(int u){
	used[u]=true;
	for(auto it:vi[u]){
		if(!used[it]) dfs(it);
 	}
}
int main(){
int t;cin>>t;
while(t--){
	cin>>n>>m;
	memset(used,false,sizeof(used));
	for(int i=1;i<=n;i++) vi[i].clear();
	while(m--){
		int x,y;
		cin>>x>>y;
		vi[x].push_back(y);
		vi[y].push_back(x);
	}
	int q;cin>>q;
	while(q--){
		int u,v;
		cin>>u>>v;
		memset(used,false,sizeof(used));
		dfs(u);
		if(!used[v]) cout<<"NO";
		else cout<<"YES";
		cout<<endl;
	}
	cout<<endl;
}

}


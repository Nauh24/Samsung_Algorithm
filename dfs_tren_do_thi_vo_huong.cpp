#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> v[1001];
int n,m,u;
bool used[1001] ;
void dfs(int u){
	used[u]=true;
	cout<<u<<" ";
	for(auto it:v[u]){
		if(!used[it]){
dfs(it);
		}
	}
}
int main(){
int t;cin>>t;

while(t--){
	cin>>n>>m>>u;
	memset(used,false,sizeof(used));
for(int i=1;i<=n;i++) v[i].clear();
	while(m--){
		int x,y;
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	dfs(u);
	
	cout<<endl;
}

}


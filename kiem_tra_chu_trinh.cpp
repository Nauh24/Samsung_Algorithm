#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m;
vector<int> v[1001];
bool vs[1001];
int parent[1001];
bool dfs(int u){
	vs[u]=true;
	for(auto it:v[u]){
		if(!vs[it]){
		parent[it]=u;
			if(dfs(it)) return true;
		}
		else if(it!=parent[u])  return true;
	}
	return false;
}
int main(){
int t;cin>>t;
while(t--){
	cin>>n>>m;
	memset(vs,false,sizeof(vs));
	for(int i=1;i<=n;i++) v[i].clear();
	memset(parent,0,sizeof(parent));
	while(m--){
		int x,y;
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	int ok=0;
	for(int i=1;i<=n;i++){
		if(!vs[i]&&dfs(i)) {
			ok=1;
			break;
		}
	}
	if(ok==0) cout<<"NO";
	else cout<<"YES";
	cout<<endl;
}

}


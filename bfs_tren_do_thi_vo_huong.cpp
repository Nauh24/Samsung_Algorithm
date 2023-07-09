#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m,u;
vector<int> v[1001];
bool used[1001];
void bfs(int u){
	queue<int> q;
	q.push(u);
	used[u]=true;
	while(!q.empty()){
		int x=q.front();
		cout<<x<<" ";
		q.pop();
		
		for(auto it:v[x]){
		if(!used[it]){
			q.push(it);
			used[it]=true;
		}	
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
bfs(u);

	cout<<endl;
}

}


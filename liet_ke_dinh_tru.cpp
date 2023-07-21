#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m;
vector<int> v[1001];
bool vs[1001];
void bfs(int u){
	queue<int> q;
	q.push(u);
	vs[u]=true;
	while(!q.empty()){
		int x=q.front();
		q.pop();
		for(auto it:v[x]){
			if(!vs[it]) {
				q.push(it);
				vs[it]=true;
			}
		}
	}
}
int main(){
int t;cin>>t;
while(t--){
	cin>>n>>m;
	for(int i=1;i<=n;i++) v[i].clear();
	memset(vs,false,sizeof(vs));
	while(m--){
		int x,y;
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	int lt=0;
	for(int i=1;i<=n;i++){
		if(!vs[i]){
			bfs(i);
			lt++;
		} 
	}
	for(int i=1;i<=n;i++){
		memset(vs,false,sizeof(vs));
		vs[i]=true;
		int dem=0;
		for(int j=1;j<=n;j++){
			if(!vs[j]) {
				bfs(j);
				dem++;
			}
		}
		if(dem>lt) cout<<i<<" ";
	}
	cout<<endl;
}

}


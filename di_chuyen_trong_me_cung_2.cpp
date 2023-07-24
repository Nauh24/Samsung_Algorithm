#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int n;
int a[11][11];
bool check[11][11];
string s;
set<string> res;
int x[4] = {1, 0, 0, -1};
int y[4] = {0, 1, -1, 0};
string ans="DRLU";
void Try(int i,int j,string s){
    if(i==n&&j==n){
        res.insert(s);
        return ;
    }
for(int k=0;k<4;k++){
    int u=i+x[k];
    int v=j+y[k];
    if(a[u][v]==1&&!check[u][v]&&u>=1&&u<=n&&v>=1&&v<=n){
        check[u][v]=true;
Try(u,v,s+ans[k]);
        check[u][v]=false;
    }
}
}
int main(){
int t;cin>>t;
while(t--){
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        cin>>a[i][j];
    check[i][j]=false;
    } 
}
res.clear();
s="";
if(a[1][1]==0||a[n][n]==0){
    cout<<-1<<endl;
    continue;
}
check[1][1]=true;
Try(1,1,s);
if(!res.size()) cout<<-1;
else for(auto it:res) cout<<it<<" ";
    cout<<endl;
}
    system("pause");
}
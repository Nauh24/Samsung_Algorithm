#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
int t;cin>>t;
while(t--){
int n,m;
cin>>n>>m;
int a[n+1][m+1];

for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++) cin>>a[i][j];
}
ll d[n+1][m+1];
for(int i=0;i<=n;i++){
    for(int j=0;j<=m;j++) d[i][j]=1e9+7;
}
d[0][0]=0;
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
       // d[i][j]=a[i][j];
        d[i][j]=min(d[i-1][j-1],min(d[i][j-1],d[i-1][j]))+a[i][j];
       
    }
   // cout<<endl;
}
cout<<d[n][m];
    cout<<endl;
}
    system("pause");
}
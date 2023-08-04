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
int d[n+1][m+1];
memset(d,0,sizeof(d));
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        cin>>a[i][j];
        d[i][j]=a[i][j];
    }
}
int ans=0;
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        if(a[i][j]==0)  continue;
        if(a[i][j]==a[i-1][j-1]&&a[i-1][j-1]==a[i-1][j]&&a[i-1][j]==a[i][j-1]) d[i][j]=min(d[i-1][j-1],min(d[i-1][j],d[i][j-1]))+1;
        ans=max(ans,d[i][j]);
    }
}
cout<<ans;
    cout<<endl;
}
    system("pause");
}
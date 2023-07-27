#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int d[101][101][101];
int main(){
ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
int t;cin>>t;
while(t--){
int n,m,k;
cin>>n>>m>>k;
string x,y,z;
cin>>x>>y>>z;

memset(d,0,sizeof(d));
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        for(int l=1;l<=k;l++){
            if(x[i-1]==y[j-1]&&y[j-1]==z[l-1]) d[i][j][l]=d[i-1][j-1][l-1]+1;
            else d[i][j][l]=max(d[i-1][j][l],max(d[i][j-1][l],d[i][j][l-1]));
        }
    }
}
cout<<d[n][m][k];
    cout<<endl;
}
    system("pause");
}
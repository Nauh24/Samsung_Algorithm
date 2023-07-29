#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
int t;cin>>t;
while(t--){
string s;cin>>s;
int n=s.size();
string x=s;
reverse(x.begin(),x.end());
int f[n+1][n+1];
memset(f,0,sizeof(f));
for(int i=0;i<=n;i++) f[i][0]=i;
for(int i=0;i<=n;i++) f[0][i]=i;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(s[i-1]==x[j-1]) f[i][j]=f[i-1][j-1];
        else f[i][j]=min(f[i-1][j],f[i][j-1])+1;
    }
}
cout<<f[n][n]/2;
    cout<<endl;
}
    system("pause");
}
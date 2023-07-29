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
string r=s;
reverse(s.begin(),s.end());
int ans=0;
int f[41][41];
memset(f,0,sizeof(f));
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(s[i-1]==r[j-1]) f[i][j]=f[i-1][j-1]+1;
        else f[i][j]=max(f[i-1][j],f[i][j-1]);
        ans=max(ans,f[i][j]);
    }
}
cout<<n-ans;
    cout<<endl;
}
    system("pause");
}
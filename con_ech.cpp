#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
int t;cin>>t;
while(t--){
int n;cin>>n;
ll f[n+1];
memset(f,0,sizeof(f));
f[0]=1;
f[1]=1;
for(int i=2;i<=n;i++){
    for(int j=1;j<=3;j++){
        if(i>=j) f[i]+=f[i-j];
    }
}
cout<<f[n];
    cout<<endl;
}
    system("pause");
}
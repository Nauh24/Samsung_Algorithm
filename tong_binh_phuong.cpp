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
int d[n+1];
memset(d,0,sizeof(d));
d[0]=0;
for(int i=1;i<=n;i++){
    d[i]=i;
    for(int j=1;j<=sqrt(i);j++){
        d[i]=min(d[i],d[i-j*j]+1);
    }
}
cout<<d[n];
    cout<<endl;
}
    system("pause");
}
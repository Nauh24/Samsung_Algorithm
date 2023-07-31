#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int n,k;
int a[16];
int b[16];
void Try(int i){
    for(int j=b[i-1]+1;j<=n-k+i;j++){
        b[i]=j;
        if(i==k){
            for(int j=1;j<=k;j++) cout<<a[b[j]]<<" ";
            cout<<endl;
        } 
        else Try(i+1);
    } 
}
int main(){
ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
int t;cin>>t;
while(t--){
cin>>n>>k;
for(int i=1;i<=n;i++) cin>>a[i];
sort(a+1,a+n+1);
Try(1);
    cout<<endl;
}
    system("pause");
}
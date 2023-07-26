#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll mod=1e9+7;
int n;
ll k;
ll a[11][11];
ll d[11][11];
void Mul(ll a[11][11],ll b[11][11]){
    ll c[11][11];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            c[i][j]=0;
            for(int k=0;k<n;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
            c[i][j]%=mod;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=c[i][j];
        }
    }
}
void Pown(ll a[11][11],ll k){
    if(k==1) return;
    Pown(a,k/2);
    Mul(a,a);
    if(k%2==1) Mul(a,d);
}
int main(){
int t;cin>>t;
while(t--){
cin>>n>>k;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>a[i][j];
        d[i][j]=a[i][j];
    }
}
Pown(a,k);
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
    cout<<endl;
}
    system("pause");
}
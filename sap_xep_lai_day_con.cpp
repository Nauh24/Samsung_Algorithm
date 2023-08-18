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
ll a[n+1];
ll b[n+1];
for(int i=1;i<=n;i++){
    cin>>a[i];
    b[i]=a[i];
}
sort(b+1,b+n+1);
int l=1,r=n;
while(l<=n&&a[l]==b[l]) l++;
while(r>=1&&a[r]==b[r]) r--;
cout<<l<<" "<<r;
    cout<<endl;
}
    system("pause");
}
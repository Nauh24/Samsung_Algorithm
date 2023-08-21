#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
int t;cin>>t;
while(t--){
int n,k;
cin>>n>>k;
ll a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n-k+1;i++){
ll maxx=*max_element(a+i,a+i+k);
cout<<maxx<<" ";
}
    cout<<endl;
}
    system("pause");
}
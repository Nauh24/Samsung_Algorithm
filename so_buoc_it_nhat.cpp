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
int a[n],d[n];
for(int i=0;i<n;i++){
    cin>>a[i];
    d[i]=1;
    for(int j=0;j<i;j++){
        if(a[i]>=a[j]){
            d[i]=max(d[i],d[j]+1);
        }
    }
}
cout<<n-*max_element(d,d+n);
    cout<<endl;
}
    system("pause");
}
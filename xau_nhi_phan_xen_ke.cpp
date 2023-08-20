#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
int n;cin>>n;
for(int i=0;i<n;i++){
    if(i%2==0) cout<<0<<" ";
    else cout<<1<<" ";
}
cout<<endl;
for(int i=0;i<n;i++){
    if(i%2==0) cout<<1<<" ";
    else cout<<0<<" ";
}

    system("pause");
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
int t;cin>>t;
while(t--){
    ll tu,mau;
cin>>tu>>mau;
while(1){
    if(mau%tu==0){
        cout<<"1/"<<mau/tu<<endl;
        break;
    }
    ll x=mau/tu +1;
    cout<<"1/"<<x<<" + ";
    tu=tu*x-mau;
    mau=mau*x;
}
    cout<<endl;
}
    system("pause");
}
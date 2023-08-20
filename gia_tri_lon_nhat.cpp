#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
int n;cin>>n;
int a[n];
ll sum1=0;
ll sum2=0;
ll sum=0;
for(int i=0;i<n;i++){
    cin>>a[i];
sum1+=abs(a[i]);
sum2+=a[i];
sum=max(sum,sum1+sum2);
}
cout<<sum;
    system("pause");
}
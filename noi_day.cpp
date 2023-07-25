#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
int t;cin>>t;
while(t--){
int n;cin>>n;
int a[n];
priority_queue<int,vector<int>,greater<int>> q;
for(int i=0;i<n;i++) {
    cin>>a[i];
    q.push(a[i]);
}
ll money=0;
while(q.size()!=1){
    int x=q.top();
    q.pop();
    int y=q.top();
    q.pop();
    ll sum=x+y;
    money+=sum;
    q.push(sum);
}
cout<<money;
    cout<<endl;
}
    system("pause");
}
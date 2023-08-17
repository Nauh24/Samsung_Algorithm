#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int n;
int a[10];
vector<int> v;
bool used[10];
void solve(){
    for(int i=0;i<n;i++) cout<<v[a[i]]<<" ";
    cout<<endl;
}
void Try(int i){
    for(int j=0;j<n;j++){
        if(!used[j]){
            used[j]=true;
a[i]=j;
        if(i==n-1) {
            solve();
        }
        else Try(i+1);
            used[j]=false;
        }
        
    }
}
int main(){
ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
v.push_back(a[i]);
}
sort(v.begin(),v.end());
Try(0);
    system("pause");
}
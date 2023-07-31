#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
int t;cin>>t;
while(t--){
string s;cin>>s;
ll ans=0;
for(int i=1;i<=s.size();i++){
    for(int j=0;j<=s.size()-i;j++){
ans+=stoll(s.substr(j,i));
    }
}
cout<<ans;
    cout<<endl;
}
    system("pause");
}
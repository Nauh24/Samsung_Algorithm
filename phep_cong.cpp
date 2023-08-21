#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
int t;cin>>t;
cin.ignore();
while(t--){
string s;
getline(cin,s);
int x=s[0]-'0';
int y=s[4]-'0';
int z=s[8]-'0';
//cout<<x<<" "<<y<<" "<<z;
if(x+y==z) cout<<"YES";
else cout<<"NO";
    cout<<endl;
}
    system("pause");
}
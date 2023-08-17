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
int res=0;
for(int i=s.size()-1;i>=1;i--){
    int x=s[i-1]-'0';
    int y=s[i]-'0';
    if(y>=5) x++;
    if(x>9){
        x=0;
        res=1;
    }
    s[i-1]=x+'0';
    s[i]='0';
}
if(res==1) cout<<res;
cout<<s;
    cout<<endl;
}
    system("pause");
}
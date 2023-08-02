#include<bits/stdc++.h>
using namespace std;
int main(){
int t;cin>>t;
int d[41];
while(t--){
string s;cin>>s;
int n=s.size();
memset(d,0,sizeof(d));
if(s[0]=='0'){
    cout<<0<<endl;
    continue;
}

d[0]=d[1]=1;
for(int i=2;i<=s.size();i++){
    if(s[i-1]>'0') d[i]=d[i-1];
    if(s[i-2]=='1'||(s[i-2]=='2'&&s[i-1]<='6')) d[i]+=d[i-2];
}
cout<<d[n];
    cout<<endl;
}
    system("pause");
}
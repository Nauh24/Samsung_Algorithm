#include<bits/stdc++.h>
using namespace std;
#define ll long long 
char c;
int n;
char a[256];
void Try(int i,char bd){
    for(char j=bd;j<=c;j++){
a[i]=j;
if(i==n) {
    for(int i=1;i<=n;i++) cout<<a[i];
    cout<<endl;
}
else Try(i+1,j);
    }
}
int main(){
ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
cin>>c>>n;
Try(1,'A');
    system("pause");
}
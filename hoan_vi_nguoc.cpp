#include<bits/stdc++.h>
using namespace std;
int n;
int a[11];
bool used[11];
void Try(int i){
    for(int j=n;j>=1;j--){
        if(!used[j]){
            used[j]=true;
a[i]=j;
if(i==n){
    for(int j=1;j<=n;j++) cout<<a[j];
    cout<<" ";
}
else Try(i+1);
            used[j]=false;
        }
    }
}
int main(){
int t;cin>>t;
while(t--){
cin>>n;
memset(used,false,sizeof(used));
Try(1);

    cout<<endl;
}
    system("pause");
}
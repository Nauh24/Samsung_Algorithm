#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int n;
vector<string> res;
vector<string> ans;
bool used[7];
int a[7];
void solve1(){
    string s1="";
    //string s2="";
    for(int i=1;i<=n;i++){
        s1+=('A'+a[i]-1);
     //   s2+=('1'+a[i]-1);
    }
    //cout<<s1<<" "<<s2<<endl;
    res.push_back(s1);
   
    
}
void Try1(int i){
    for(int j=1;j<=n;j++){
        if(!used[j]){
            a[i]=j;
            used[j]=true;
if(i==n){
    solve1();
}
else Try1(i+1);
            used[j]=false;
        }
    }
}
void solve2(){
   
    string s2="";
    for(int i=1;i<=n;i++){
      //  s1+=('A'+a[i]-1);
        s2+=('1'+a[i]-1);
    }
    //cout<<s1<<" "<<s2<<endl;
    ans.push_back(s2);
}
void Try2(int i){
    for(int j=1;j<=n;j++){
        a[i]=j;
        if(i==n) solve2();
        else Try2(i+1);
    }
}
int main(){
ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
cin>>n;
res.clear();
Try1(1);
Try2(1);
for(auto it:res){
    for(auto x:ans){
        cout<<it<<x<<endl;
    }
}
// for(auto it:res) cout<<it<<" ";
// for(auto it:ans) cout<<it<<" ";
    system("pause");
}
#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b){
    if(a.second==b.second) return a.first<b.first;
    else if(a.second>b.second) return true;
    else return false;
}
int main(){
int n,m;cin>>n>>m;
map<int,int> mp;
for(int i=1;i<=n;i++){
    int x;cin>>x;
    mp[x]++;
}
vector<pair<int,int>> v;
for(auto it:mp) v.push_back({it.first,it.second});
sort(v.begin(),v.end(),cmp);
int res=v[0].second;
int i=0;
while(v[i].second==res&&i<v.size()) i++;
if(i==v.size()) cout<<"NONE";
else cout<<v[i].first;
    system("pause");
}
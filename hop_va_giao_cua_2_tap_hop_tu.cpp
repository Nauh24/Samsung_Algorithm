#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void transform(string s){
    for(int i=0;i<s.size();i++){
     if(s[i]>='A'&&s[i]<='Z')   s[i]=s[i]+('a'-'A');
    }
}
int main(){
ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
string a,b;
string tmp;
getline(cin,a);
getline(cin,b);
for(int i=0;i<a.size();i++) a[i]=tolower(a[i]);
for(int i=0;i<b.size();i++) b[i]=tolower(b[i]);
set<string> s1,s2;
stringstream ss1(a),ss2(b);
while(ss1>>tmp){
s1.insert(tmp);
}
while(ss2>>tmp){
    s2.insert(tmp);
}

cout<<endl;

map<string,int> mp;
for(auto it:s1) mp[it]++;
for(auto it:s2) mp[it]++;
vector<string> res;
for(auto it:mp){
    if(it.second==2) res.push_back(it.first);
    cout<<it.first<<" ";
 
} 
cout<<endl;
for(auto it:res) cout<<it<<" ";

system("pause");
}
/*
Lap trinh huong doi tuong
Ngon ngu lap trinh C++
*/
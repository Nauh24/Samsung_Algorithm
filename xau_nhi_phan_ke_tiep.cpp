#include<bits/stdc++.h>
using namespace std;
#define ll long long
string s;
void next(){
	int i=s.length()-1;
	while(i>=0&&s[i]=='1'){
		s[i]='0';
		i--;
	}
	if(i<0) for(int i=0;i<s.size();i++) cout<<0;
	else {
		s[i]='1';
		cout<<s;
	}
}
int main(){
int t;cin>>t;
while(t--){
	cin>>s;
	next();
	cout<<endl;
}

}


#include<bits/stdc++.h>
using namespace std;
#define ll long long
string s;
void next(){
	int i=s.size()-1;
	while(i>=0&&s[i]=='0'){
		s[i]='1';
		i--;
	}
	if(i<0) for(int i=0;i<s.size();i++) cout<<1;
	else{
		s[i]='0';
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


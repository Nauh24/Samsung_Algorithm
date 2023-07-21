#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,k;
int a[1001];
void next(){
	int i=k;
	while(i>=1&&a[i]==a[i-1]+1){
		i--;
	}
	if(i==0) for(int i=n-k+1;i<=n;i++) cout<<i<<" ";
	else{
		a[i]--;
		for(int j=i+1;j<=k;j++) a[j]=n-k+j;
		for(int i=1;i<=k;i++) cout<<a[i]<<" ";
	}
}
int main(){
int t;cin>>t;
while(t--){
	cin>>n>>k;
	for(int i=1;i<=k;i++) cin>>a[i];
	 next();
	cout<<endl;
}

}


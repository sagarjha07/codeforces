#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[4];
	for(int i=0;i<4;i++){
		cin>>a[i];
	}
	int n;
	cin>>n;
	int subsets=(1<<n)-1;
	int ans=0;
	for(int i=1;i<=subsets;i++){
		int denom=1;
		int setbits=__builtin_popcount(i);
		for(int j=0;j<4;j++){
			if(i&(1<<j)){
				denom=denom*a[j];
			}
		}
		if(setbits&1) ans+=n/denom;
		ans-=n/denom;
	}
	cout<<ans<<'\n';
	return 0;
}
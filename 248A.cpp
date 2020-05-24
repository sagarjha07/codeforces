#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int l0=0,l1=0,r0=0,r1=0;
	int temp=n;
	while(temp--){
		int x,y;
		cin>>x>>y;
		x==0?l0=l0+1:l1=l1+1;
		y==0?r0=r0+1:r1=r1+1;
	}
	int ans=0;

	l0>l1?ans+=l1:ans+=l0;
	r0>r1?ans+=r1:ans+=r0;
	cout<<ans<<'\n';
	return 0;
}
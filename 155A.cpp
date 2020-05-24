#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int x;
	cin>>x;
	int minval=x,maxval=x;
	n=n-1;
	int ans=0;
	while(n--){
		int y;
		cin>>y;
		if(y>maxval){
			maxval=y;
			ans+=1;
		}
		else if(y<minval){
			minval=y;
			ans+=1;
		}
	}
	cout<<ans<<'\n';
	return 0;
}
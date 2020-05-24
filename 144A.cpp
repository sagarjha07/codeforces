#include<iostream>
#include<climits>
using namespace std;
int main(){
	int n;
	cin>>n;
	int minindex,maxindex;
	int minval=INT_MAX;
	int maxval=INT_MIN;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		if(x<=minval){
			minval=x;
			minindex=i;
		}
		if(x>maxval){
			maxval=x;
			maxindex=i;
		}
	}
	int ans=maxindex-0+n-1-minindex;
	if(minindex<maxindex){
		ans-=1;
	}
	cout<<ans<<'\n';
}
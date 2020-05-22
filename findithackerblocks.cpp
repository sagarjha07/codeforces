#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int count[100005]={0};
	while(n--){
		int x;
		cin>>x;
		count[x]+=1;
	}
	int pre[100005]={0};
	for(int i=1;i<100005;i++){
		for(int j=i;j<100005;j+=i){
			if(count[j]>0){
				pre[i]+=count[j];
			}
		}
	}
	int q;
	cin>>q;
	while(q--){
		int x;
		cin>>x;
		cout<<pre[x]<<'\n';
	}
}
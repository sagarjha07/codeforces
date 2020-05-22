#include<iostream>
#include<cstring>
using namespace std;
int pr[51]={0};
void sieve(){
	for(int i=2;i<=50;i++){
		if(pr[i]==0){
			for(int j=i*i;j<=50;j+=i){
				pr[j]=1;
			}
		}
	}
}
int main(){
	sieve();
	int n;
	int m;
	cin>>n>>m;
	int i=n+1;
	while(pr[i]!=0)
		i+=1;
	if(i==m) cout<<"YES"<<'\n';
	else cout<<"NO"<<'\n';
	return 0;
}
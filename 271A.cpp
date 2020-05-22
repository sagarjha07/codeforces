#include<iostream>
#include<unordered_set>
using namespace std;

int distinct_digits(int n){
	unordered_set<int> s;
	while(n>0){
		s.insert(n%10);
		n=n/10;
	}
	return s.size();
}
int main(){
	int n;
	cin>>n;
	int temp=n;
	int digit=0;
	while(temp>0){
		temp=temp/10;
		digit+=1;
	}
	int ans=n+1;
	while(digit!=distinct_digits(ans)){
		ans+=1;
	}
	cout<<ans<<'\n';
	return 0;
}
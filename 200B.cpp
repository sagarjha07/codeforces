#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	double sum=0.0;
    int temp=n;
	while(n--){
		int x;
		cin>>x;
		sum+=x;
	}
	cout<<sum/temp<<endl;
	return 0;
}
#include<iostream>
using namespace std;
int main(){
	string s;
	cin>>s;
	string ans="";
	int i=0;
	while(i<s.size()){
		if(s[i]=='.'){
			ans+="0";
			i+=1;
		}
		else if(s[i]='-' and (i+1)!=s.size() and s[i+1]=='.'){
			ans+="1";
			i+=2;
		}
		else {
			ans+="2";
			i+=2;
		}
	}
	cout<<ans<<'\n';
	return 0;
}
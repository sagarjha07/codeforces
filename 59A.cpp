#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	string ans="";
	int upper_count=0,lower_count=0;
	for(int i=0;i<s.size();i++){
		char upper=toupper(s[i]);
		char lower=tolower(s[i]);
		if(s[i]==upper) upper_count+=1;
		else lower_count+=1;
	}
	if(upper_count==lower_count || upper_count<lower_count){
		for(int i=0;i<s.size();i++){
			ans+=tolower(s[i]);
		}
	}
	else{
		for(int i=0;i<s.size();i++){
			ans+=toupper(s[i]);
		}
	}
	cout<<ans<<'\n';
	return 0;
}
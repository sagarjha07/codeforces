#include<iostream>
#include<cstring>
using namespace std;
int main() {
    string s1,s2;
    cin>>s1>>s2;
    string ans="";
    for(int i=0;i<s1.size();i++){
        if(s1[i]!=s2[i]) ans+="1";
        else ans+="0";
    }
    cout<<ans<<'\n';
}

#include<iostream>
using namespace std;
int main(){
	int ans=0;
	string s;
	string::iterator a; 
	cin>>s;
	for(a=s.begin();*a!='\0';a++){
		ans+=*a-'0';
	}
	cout<<ans;
	return 0;
} 

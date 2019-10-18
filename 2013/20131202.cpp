#include<string>
#include<iostream>
using namespace std;
int main(){
	string s;
	char iden;
	string::iterator it;
	int base=1,sum=0;
	cin>>s;
	s.erase(1,1);
	s.erase(4,1);
	s.erase(9,1);
	for(it=s.begin();it!=s.begin()+9;it++){
		sum+=((*it)-'0')*base;
		base++;
	}
	iden=sum%11==10?'X':(sum%11)+'0';
	it=s.end()-1;
	if((*it)==iden) cout<<"Right";
	else{
		*it=iden;
		s.insert(1,"-");
		s.insert(5,"-");
		s.insert(11,"-");
		cout<<s;
	}
	return 0;
} 

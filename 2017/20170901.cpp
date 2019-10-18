#include<iostream>
using namespace std;
int main(){
	int m,b=0;
	cin>>m;
	if(m>=50){
		b+=(m/50)*7;
		m%=50;
	}
	if(m>=30){
		b+=(m/30)*4;
		m%=30;
	}
	if(m>=10){
		b+=(m/10);
	}
	cout<<b;
	return 0;
}


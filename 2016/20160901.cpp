#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int i,n;
	int max=0,gap;
	int num[1005];
	cin>>n;
	for(i=0;i<n;i++){
		cin>>num[i];
	}
	for(i=1;i<n;i++){
		gap=abs(num[i]-num[i-1]);
		if(gap>max) max=gap;
	}
	cout<<max;
	return 0;
}

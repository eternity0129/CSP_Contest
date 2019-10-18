#include<iostream>
using namespace std;
int main(){
	int num[1005];
	int i,n,cnt=0;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>num[i];
	}
	for(i=1;i<n-1;i++){
		if((num[i+1]-num[i])*(num[i-1]-num[i])>0) cnt++;
	}
	cout<<cnt;
	return 0;
}

#include<iostream>
using namespace std;
int main(){
	int i,j,n;
	int cnt=0;
	int num[1005];
	cin>>n;
	for(i=0;i<n;i++){
		cin>>num[i];
	}
	for(i=1;i<n;i++){
		if(num[i]!=num[i-1])
			cnt++;
	}
	cnt++;
	cout<<cnt;
	return 0;
}

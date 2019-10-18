#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int a[1005];
	int b[1005];
	int i,n;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	b[0]=(a[1]+a[0])/2;
	b[n-1]=(a[n-2]+a[n-1])/2;
	cout<<b[0]<<" ";
	for(i=1;i<n-1;i++){
		b[i]=(a[i]+a[i-1]+a[i+1])/3;
		cout<<b[i]<<" ";
	}
	cout<<b[n-1];
	return 0;
}

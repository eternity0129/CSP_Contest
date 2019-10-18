#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std; 
int num[10005];
int main(){
	int i,n;
	int min;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>num[i];
	}
	sort(num,num+n);
	min=num[1]-num[0];
	for(i=1;i<n-1;i++){
		if(abs(num[i+1]-num[i])<min)
			min=abs(num[i+1]-num[i]);
	}
	cout<<min;
	return 0;
}

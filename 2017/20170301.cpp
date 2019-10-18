#include<iostream>
using namespace std;
int main(){
	int i,n,k;
	int num=0;
	int cake[1005];
	int got=0;
	cin>>n>>k;
	for(i=0;i<n;i++){
		cin>>cake[i];
	}
	i=0;
	while(i<n){
		got=cake[i++];
		while(got<k){
			got+=cake[i++];
		}
		num++;
	}
	cout<<num;
	return 0;
}

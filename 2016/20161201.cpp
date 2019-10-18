#include<iostream>
using namespace std;
int main(){
	int i,j,n;
	int less,bigger;
	int num[1005];
	cin>>n;
	for(i=0;i<n;i++){
		cin>>num[i];
	}
	for(i=0;i<n;i++){
		less=0;
		bigger=0;
		for(j=0;j<n;j++){
			if(num[j]>num[i]){
				bigger++; 
			}
			else if(num[j]<num[i]){
				less++;
			}	
		}
		if(bigger==less){
			cout<<num[i];
			return 0;
		}
	}
	cout<<-1;
	return 0;
}

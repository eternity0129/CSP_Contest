#include<iostream>
using namespace std;
int num[1000][1000];
int main(){
	int n,m,i,j;
	cin>>n>>m;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin>>num[i][j];
		}
	}
	for(j=m-1;j>=0;j--){
		for(i=0;i<n;i++){
			cout<<num[i][j]<<" ";
		}
		cout<<'\n';
	}
	return 0;
}

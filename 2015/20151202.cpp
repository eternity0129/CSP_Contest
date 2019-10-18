#include<iostream>
using namespace std;
	int a[30][30];
	int del[30][30];
int main(){
	int n,m;
	int i,j;

	cin>>n>>m;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			del[i][j]=0;
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<m-2;j++){
			if(a[i][j]==a[i][j+1]&&a[i][j+1]==a[i][j+2]){
				del[i][j]=del[i][j+1]=del[i][j+2]=1;
			}
		}
	}
	
	for(j=0;j<m;j++){
		for(i=0;i<n-2;i++){
			if(a[i][j]==a[i+1][j]&&a[i+1][j]==a[i+2][j]){
				del[i][j]=del[i+1][j]=del[i+2][j]=1;
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(del[i][j]==1){
				a[i][j]=0;
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<'\n';
	}
	return 0; 
}

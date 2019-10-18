#include<iostream>
using namespace std;
int main(){
	int num[500][500];
	int i,j,n;
	int type=0;//0：右左下 1：下右上 2:下左下 3右右上 
	cin>>n;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin>>num[i][j]; 
		}
	}
	i=0;
	j=0;
	cout<<num[i][j]<<" ";
	while(i!=n-1||j!=n-1){
		if(type==0){
			type=1;
			j++; 
			cout<<num[i][j]<<" ";
			while(j!=0){
				i++;
				j--;
				cout<<num[i][j]<<" ";
			}
			if(i==n-1&&j==0){
				type=3;
			} 
		}
		else if(type==1){
			type=0;
			i++;
			cout<<num[i][j]<<" ";
			while(i!=0){
				i--;
				j++;
				cout<<num[i][j]<<" ";
			}
			if(i==0&&j==n-1){
				type=2;
			} 
		}
		else if(type==2){
			type=3;
			i++;
			cout<<num[i][j]<<" ";
			while(i!=n-1){
				i++;
				j--;
				cout<<num[i][j]<<" ";
			}
		}
		else if(type==3){
			type=2;
			j++;
			cout<<num[i][j]<<" ";
			while(j!=n-1){
				i--;
				j++;
				cout<<num[i][j]<<" ";
			}
		}
	}
	return 0;
}

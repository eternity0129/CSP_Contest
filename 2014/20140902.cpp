#include<iostream>
using namespace std;
int main(){
	int i,j,k,n,cnt=0;
	int all[105][105];
	int x1,y1,x2,y2;
	cin>>n;
	for(i=0;i<105;i++){
		for(j=0;j<105;j++){
			all[i][j]=0;
		}
	}
	for(i=0;i<n;i++){
		cin>>x1>>y1>>x2>>y2;
		for(j=x1;j<x2;j++){
			for(k=y1;k<y2;k++){
				all[k][j]=1;
			}
		}
	}
	for(i=0;i<105;i++){
		for(j=0;j<105;j++){
			if(all[i][j]==1)
				cnt++;
		}
	}
	cout<<cnt;
	return 0;
}

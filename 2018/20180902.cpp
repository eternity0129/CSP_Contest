#include<iostream>
using namespace std;
int all[1000005];

int cnt(int b,int e){
	int i,n=0;
	for(i=b-1;i<e;i++){
		if(all[i]==2) n++;
	}
	return n;
}

int main(){
	int i,n,j;
	int a,b;
	int min=0,max=0;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a;
		cin>>b;
		min=a<min?a:min;
		max=b>max?b:max;
		for(j=a-1;j<b-1;j++){
			all[j]=1;
		}
	}
	for(i=0;i<n;i++){
		cin>>a;
		cin>>b;
		min=a<min?a:min;
		max=b>max?b:max;
		for(j=a-1;j<b-1;j++){
			all[j]=(all[j]==1)?2:1;
		}	
	}
	cout<<cnt(min,max);
	return 0;
} 

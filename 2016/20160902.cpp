#include<iostream>
using namespace std;
struct Seat{
	int no;
	int left;
};
struct Seat seat[20]; 
void init(){
	int no=1;
	int i;
	for(i=0;i<20;i++){
		seat[i].no=no;
		seat[i].left=5;
		no+=5;
	}
} 
int main(){
	int n,i,j,k;
	int f=0;
	int no;
	int a[105];
	init();
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		f=0;
		for(j=0;j<20;j++){
			if(seat[j].left>=a[i]){
				seat[j].left-=a[i];
				for(k=0;k<a[i];k++){
					cout<<seat[j].no++<<" ";
				}
				cout<<'\n';
				f=1;
				break;
			}
		}
		if(f==0){
			for(j=0;j<20;j++){
				if(seat[j].left>=a[i]){
					for(k=0;k<a[i];k++){
						cout<<seat[j].no++<<" ";
					}
					seat[j].left-=a[i];
					break;
				}
				else if(seat[j].left>0&&seat[j].left<a[i]){
					for(k=0;k<seat[j].left;k++){
						cout<<seat[j].no++<<" ";
					}
					a[i]-=seat[j].left;
					seat[j].left=0;
				}
			}
		}
	}
	return 0;
} 

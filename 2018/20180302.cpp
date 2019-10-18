#include<iostream>
using namespace std;
struct ball{
	int pos;
	int dir;//1:>> -1:<<
};
typedef struct ball Ball;
Ball balls[105];

void checkM(int i,int n){
	int j;
	if(i==n-1) return;//final
	for(j=i+1;j<n;j++){
		if(balls[i].pos==balls[j].pos){
			balls[i].dir*=-1;
			balls[j].dir*=-1;
			return;
		}
	}
}

void checkW(int i,int l){
	if(balls[i].pos==0||balls[i].pos==l) balls[i].dir*=-1;
} 

void move(int i){
	if(balls[i].dir==1) balls[i].pos+=1;
	else balls[i].pos-=1;
}

int main(){
	int n,l,t;
	int i,j;
	cin>>n>>l>>t;
	for(i=0;i<n;i++){
		cin>>balls[i].pos;
		balls[i].dir=1;
	}
	for(i=0;i<t;i++){
		for(j=0;j<n;j++){
			checkM(j,n);
			checkW(j,l);
			move(j);
		//	cout<<balls[j].pos<<" ";
		}
	}
	//cout<<'\n';	
	for(i=0;i<n;i++){
		cout<<balls[i].pos<<" ";
	}
	return 0;
}

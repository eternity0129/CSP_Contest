#include<stdio.h>
int main(){
	int s,w,sum=0,pre=1;
	while(1){
	scanf("%d",&s);
	if(s==0) break;
	if(s==1) {
		sum+=1;
		w=0;
	}
	else if(s==2){
		if(pre==1) {
			sum+=2;
			w=2;
		}
		else if(pre==2){
			w+=2;
			sum+=w;
		}
	}
	pre=s;
	}
	printf("%d",sum);
	return 0;
} 

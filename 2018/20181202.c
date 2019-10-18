#include<stdio.h>
int main(){
	long long int sum=0,tmp;//数值过大 
	int all,k,t;
	int i,r,g,y;
	scanf("%d %d %d",&r,&y,&g);
	scanf("%d",&all);
	for(i=0;i<all;i++){
		scanf("%d %d",&k,&t);
		if(k!=0){//有路灯：先计算到达时的时间=之前经历时间+该状态保持时间 
			if(k==1) tmp=sum+r-t;//red
			else if(k==2) tmp=sum+r+g+y-t;//yellow
			else if(k==3) tmp=sum+r+g-t;//green
			tmp%=(r+g+y);
			if(tmp<r) t=r-tmp;//red>>green
			else if(tmp>=r+g) t=r+g+y-tmp+r;//yellow>>red>>green
			else t=0; 
		} 
		sum+=t; 
	}
	printf("%lld",sum);
	return 0;	
}

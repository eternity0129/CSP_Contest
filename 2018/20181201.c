#include<stdio.h>
int main(){
	int i,r,g,y;
	int all,sum=0;
	int k,t;
	scanf("%d %d %d",&r,&g,&y);
	scanf("%d",&all);
	for(i=0;i<all;i++){
		scanf("%d %d",&k,&t);
		if(k==0) sum+=t;
		else if(k==1) sum+=t;//red>>green
		else if(k==2) sum+=t+r;//yellow>>red>>green
							  //green	
	}
	printf("%d",sum);
	return 0; 
}


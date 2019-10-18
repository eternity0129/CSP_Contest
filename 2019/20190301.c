#include<stdio.h>
int main(){
	int i,num,n[100005];
	int max,min;
	double mid;
	scanf("%d",&num);
	for(i=0;i<num;i++){
		scanf("%d",&n[i]);
	}
	if(n[0]<n[num-1]){
		min=n[0];
		max=n[num-1];
	}
	else{
		min=n[num-1];
		max=n[0];
	}
	if(num%2==1){
		mid=(double)n[num/2];//double
	}
	else{
		mid=(double)(n[num/2-1]+n[num/2])/2;
	}
	if(mid-(int)mid!=0) printf("%d %.1f %d",max,mid,min);
	else printf("%d %d %d",max,(int)mid,min);
	return 0; 
} 

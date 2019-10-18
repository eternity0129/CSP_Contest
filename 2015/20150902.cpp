#include<iostream>
using namespace std;
int year[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int main(){
	int mon,day,in,in1,sum=0;
	cin>>in>>in1;
	if((in%4==0&&in%100!=0)||(in%400==0)){
		year[1]=29;
	}
	for(mon=0;mon<12;mon++){
		if(sum+year[mon]>=in1) break;
		sum+=year[mon];
	}
	mon++;
	day=in1-sum;
	cout<<mon<<'\n'<<day;
	return 0;
}

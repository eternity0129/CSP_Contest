#include<iostream>
using namespace std;
int main(){
	int t,s,a;
	int tax,i;
	cin>>t;
	if(t<=3500) {
		cout<<t;
		return 0;
	}
	for(s=3600;s<=200000;s+=100){
		a=s-3500;
		if(a<=1500) 
			tax=a*0.03;
		else if(a>1500&&a<=4500) 
			tax=1500*0.03+(a-1500)*0.1;
		else if(a>4500&&a<=9000) 
			tax=1500*0.03+3000*0.1+(a-4500)*0.2;
		else if(a>9000&&a<=35000) 
			tax=1500*0.03+3000*0.1+4500*0.2+(a-9000)*0.25;
		else if(a>35000&&a<=55000)
			tax=1500*0.03+3000*0.1+4500*0.2+26000*0.25+(a-35000)*0.3;
		else if(a>55000&&a<=80000)
			tax=1500*0.03+3000*0.1+4500*0.2+26000*0.25+20000*0.3+(a-55000)*0.35;
		else
			tax=1500*0.03+3000*0.1+4500*0.2+26000*0.25+20000*0.3+25000*0.35+(a-80000)*0.45;
		/*if(s==10000){
			i++;
		}*/
		if(s-tax==t) cout<<s;
	} 
	return 0;
}
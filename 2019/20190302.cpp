#include<iostream>
#include<cstring>
#include<stack> 
using namespace std;
stack<int> num;
int n,sum;
char str[10];
int main(){
	int i=0,j=0;
	int head;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>str;
		while(!num.empty()) num.pop();
		for(j=0;j<7;j++){
			if(str[j]>='0'&&str[j]<='9')//乘除先运算 减法处理为加法 
				num.push(str[j]-'0');
			else if(str[j]=='x'){
				head=num.top();
				num.pop();
				num.push(head*(str[j+1]-'0'));
				j++;	
			}
			else if(str[j]=='/'){
				head=num.top();
				num.pop();
				num.push(head/(str[++j]-'0'));	
			}
			else if(str[j]=='-'){
				num.push(-1*(str[++j]-'0'));
			}
		}
		sum=0;
		while(!num.empty()){
			sum+=num.top();
			num.pop();
		}
		if(sum==24)cout<<"Yes"<<endl;
		else cout<<"No"<<endl; 
	}
	return 0;
}

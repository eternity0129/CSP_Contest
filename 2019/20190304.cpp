#include<iostream>
#include<sstream>
#include<queue>
#include<stdio.h>
using namespace std;
struct NN{
	int no;
	int type;//0>>R 1>>S
	int tar;
	NN(int n,int ty,int ta):no(n),type(ty),tar(ta){}
	NN(){}
};
struct NN to;
struct NN top;
queue<struct NN> all[10004];
int main(){
	int i,j,k,t,n;
	int no,type,tar;
	int flag;
	string s;
	stringstream sss;
	cin>>t>>n;
	getchar();
	for(i=0;i<t;i++){
		flag=0;
		for(j=0;j<n;j++){
			getline(cin,s);
			//cout<<s<<'\n';
			sss<<s;
			while(sss>>s){
			//	cout<<s;
				if(s[0]=='R') type=0;
				else type=1;
				no=j;
				tar=s[1]-'0';
				all[j].push(NN(no,type,tar));
			}
			sss.clear();
		}
		k=0;
		while(k<n){
			if(all[k].empty()) {
				k++;
				continue;
			}
			top=all[k].front();
			if(top.type!=1){
				k++;
			}
			else {
				no=top.no;
				tar=top.tar;
				to=all[tar].front();
				if(to.type!=0||to.tar!=no){
					cout<<1<<'\n';
					flag=1;
					break;
				}
				all[k].pop();
				all[tar].pop();
				k=0;
			}
		}
		for(k=0;k<n;k++){
			if(!all[k].empty()){
				if(flag!=1) cout<<1<<'\n';
				flag=1;
			}
		}
		if(!flag) cout<<0<<'\n';
		for(k=0;k<n;k++){
			while(!all[k].empty()) all[k].pop();
		}
	}
	return 0;
} 

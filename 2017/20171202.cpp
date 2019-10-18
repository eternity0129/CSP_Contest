#include<iostream>
#include<queue>
using namespace std;
int main(){
	queue<int> list;
	int i;
	int n,k;
	int num=1;
	cin>>n>>k;
	for(i=1;i<=n;i++){
		list.push(i);
	}
	while(list.size()>1){
		int top=list.front();
		list.pop();
		if(num%k==0||num%10==k){
		//	cout<<top<<" "<<num<<'\n';
		}
		else list.push(top);
		num++;
	}
	cout<<list.front();
	return 0;
}

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int i,n,in,time;
	vector<int> num;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>in;
		num.push_back(in);
		time=count(num.begin(),num.end(),in);
		cout<<time<<" ";
	}
	return 0;
} 

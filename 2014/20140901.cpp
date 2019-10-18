#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	vector<int> num;
	vector<int>::iterator i1;
	int i,n,in;
	int cnt=0;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>in;
		num.push_back(in);
	}
	for(i1=num.begin();i1!=num.end();i1++){
		cnt+=count(i1,num.end(),(*i1)-1);
		cnt+=count(i1,num.end(),(*i1)+1);
	}
	cout<<cnt;
	return 0;
}

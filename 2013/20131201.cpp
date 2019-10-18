#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct NN{
	int num;
	int time;
	NN(int n,int t):num(n),time(t){}
	bool operator <(const NN &a)const{
		if(time==a.time) return num>a.num;
		else return time<a.time;
	}
	bool operator ==(const NN &a)const{
		return num==a.num;
	}
};
vector<struct NN> all;
vector<struct NN>::iterator it;
int main(){
	int i,n,num;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>num;
		it=find(all.begin(),all.end(),NN(num,0));
		if(it!=all.end()){
			(*it).time++;
		}
		else{
			all.push_back(NN(num,1));
		}
	}
	sort(all.begin(),all.end());
	it=all.end();
	it--;
	cout<<(*it).num;
	return 0;
}

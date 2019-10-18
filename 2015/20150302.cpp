#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct NN{
	int num;
	int time;
	NN(int _n,int _t):num(_n),time(_t){}
	bool operator<(const NN & k)const{
		if(time==k.time) return num>k.num;
		return time<k.time;
	} 
};
vector<struct NN> all;

int main(){
	int i,j=0,n,num;
	vector<struct NN>::iterator it; 
	cin>>n;
	for(i=0;i<n;i++){
		cin>>num;
		for(it=all.begin();it!=all.end();it++){
			if((*it).num==num) break;
		}
		if(it!=all.end()){
			(*it).time++;
		}
		else all.push_back(NN(num,1));
	}
	sort(all.begin(),all.end());
	for(it=all.end()-1;it>=all.begin();it--){
		cout<<(*it).num<<" "<<(*it).time<<'\n';
	}
	return 0;
}

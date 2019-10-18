#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
struct action{
	int room;
	int time;
	int type;//0>>put 1>>get
	action(int r,int t,int p):room(r),time(t),type(p){}
	bool operator<(const action &a)const{
		if(time<a.time) return 1;
		else if(time==a.time&&type<a.type)	return 1;
		else if(time==a.time&&type==a.type&&room<a.room) return 1;
		return 0;
	}
};

int main(){
	int n,k;
	int i,j;
	int room,begin,length;
	vector<action> actions;
	cin>>n>>k;
	int state[n+1];
	for(i=1;i<=n;i++){
		state[i]=i;
	}
	for(i=0;i<k;i++){
		cin>>room>>begin>>length;
		actions.push_back(action(room,begin,1));
		actions.push_back(action(room,begin+length,0));
	}
	sort(actions.begin(),actions.end());
	for(i=0;i<2*k;i++){
		if(actions[i].type==0){
			for(j=1;j<=n;j++){
				if(state[j]==-1){
					state[j]=actions[i].room;
					break;
				}
			} 
		}
		else if(actions[i].type==1){
			for(j=1;j<=n;j++){
				if(state[j]==actions[i].room){
					state[j]=-1;
					break;
				}
			}
		}
	}
	for(i=1;i<=n;i++)	cout<<state[i]<<" ";
	return 0;
}

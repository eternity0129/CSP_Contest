#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int all[2600][2600];
struct NN{
	int x1;
	int x2;
	int y1;
	int y2;
	int no;
	NN(int _no,int x_1,int y_1,int x_2,int y_2):no(_no),x1(x_1),y1(y_1),x2(x_2),y2(y_2){}
	NN(int _no):no(_no){}
	bool operator ==(const NN & a)const{
		return no==a.no;
	}
};
vector<struct NN> pos;
vector<struct NN>::iterator it;

int main(){
	int n,m;
	int i,j,k;
	int no=1;
	int x1,y1,x2,y2,x,y;
	cin>>n>>m;
	for(j=0;j<2600;j++){
		for(k=0;k<2600;k++){
			all[j][k]=0;
		}
	}
	for(i=0;i<n;i++){
		cin>>x1>>y1>>x2>>y2;
		pos.push_back(NN(no,x1,y1,x2,y2));
		for(j=x1;j<=x2;j++){
			for(k=y1;k<=y2;k++){
				all[j][k]=no;	
			}
		}
		no++;	
	}
	for(i=0;i<m;i++){
		cin>>x>>y;
		if(all[x][y]!=0) {
			cout<<all[x][y]<<'\n';
			it=find(pos.begin(),pos.end(),NN(all[x][y]));
			x1=(*it).x1;
			x2=(*it).x2;
			y1=(*it).y1;
			y2=(*it).y2;
			for(j=x1;j<=x2;j++){
				for(k=y1;k<=y2;k++){
					all[j][k]=(*it).no;	
				}
			}
		}
		else cout<<"IGNORED"<<'\n';
	}
	return 0;
}

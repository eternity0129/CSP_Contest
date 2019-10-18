#include<iostream>
#include<list>
#include<algorithm> 

using namespace std;
list<int> stu;
list<int>::iterator it;
int main(){
	int i,m,n;
	int num,pos;
	cin>>n>>m;
	for(i=1;i<=n;i++){
		stu.push_back(i);
	}
	for(i=0;i<m;i++){
		cin>>num>>pos;
		it=find(stu.begin(),stu.end(),num);
		advance(it,pos); 
		if(pos>0) it++;
		stu.remove(num);
		stu.insert(it,num);
		
	}
	for(it=stu.begin();it!=stu.end();it++){
			cout<<*it<<" ";
		}
		cout<<'\n';
		return 0;
}

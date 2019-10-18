#include<stdio.h>
#include<algorithm>
#define N 100005
using namespace std;

struct Edge{
	int u,v,w;
	bool operator<(const Edge &a)const{
		return w<a.w;//要return 
	}
}edge[N];

int pre[N];

void init(int n){
	int i;
	for(i=0;i<n;i++){
		pre[i]=i;
	}
}

int find(int x){
	int r=x,j;
	while(r!=pre[r]){
		r=pre[r];
	}
	while(x!=r){
		j=pre[x];
		pre[x]=r;
		x=j;
	}
	return r;//返回根节点 
}

int join(int x,int y){
	int fx=find(x);
	int fy=find(y);
	if(fx!=fy){
		pre[fx]=fy;
		return 1;
	}
	return 0;
} 

int main(){
	int n,m,i,r;
	scanf("%d %d %d",&n,&m,&r);
	for(i=0;i<m;i++){
		scanf("%d %d %d",&edge[i].u,&edge[i].v,&edge[i].w);
	}
	sort(edge,edge+m);
	init(m);
	int num=0,ans;
	for(i=0;i<m;i++){
		if(join(edge[i].u,edge[i].v)){
			ans=edge[i].w;
			num++;
			if(num==n-1) break;//nedd only n-1
		}
	}
	printf("%d",ans);
	return 0; 
}


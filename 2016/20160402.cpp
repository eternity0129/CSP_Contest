#include<iostream>
using namespace std;
struct Pos{
	int row;
	int col;
}cord[4];
int row,col;
int board[16][10];
int block[4][4];

int main(){
	int i,j,num=0;
	int check=0;
	for(i=0;i<15;i++){
		for(j=0;j<10;j++){
			cin>>board[i][j];
		}
	}
	for(i=0;i<10;i++){
		board[15][i]=1;
	}
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			cin>>block[i][j];
		}
	}
	cin>>col;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(block[i][j]==1){
				cord[num].row=i;
				cord[num].col=j;
				num++;	
			}
		}
	}
	row=0;
	col--;
	while(1){
		for(i=0;i<4;i++){
			if(board[row+cord[i].row][col+cord[i].col]==1){
				check=1;
				break;
			}
		}
		if(check) break;
		row++;
	}
	row--;
	for(i=0;i<4;i++){
		board[row+cord[i].row][col+cord[i].col]=1;
	}
	for(i=0;i<15;i++){
		for(j=0;j<10;j++){
			cout<<board[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

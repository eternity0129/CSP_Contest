#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;
vector<int> num;
int main(){
	int i,n;
	int in;
	double mid;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>in;
		num.push_back(in);
	}
	sort(num.begin(),num.end());
	if(n%2==0) mid=(num[n/2]+num[n/2-1])/2;
	else mid=num[n/2];
	if(mid-(int)mid!=0) cout<<num[n-1]<<" "<<mid<<setprecision(1)<<" "<<num[0];
	else cout<<num[n-1]<<" "<<mid<<setprecision(0)<<" "<<num[0];
	return 0;
}

#include<iostream>
#include<algorithm>
using namespace std;
int main(){

	int a[10]={2,5,1,4,6,8,9,4,3,1};
	sort(a,a+10);
	for(auto i : a)
		cout<<i;



	return 0;
}
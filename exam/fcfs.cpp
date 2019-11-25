#include<bits/stdc++.h>
using namespace std;
int main(){
	// cout<<"tetsts";

	int n;
	cout<<"enter the no of processes";
	cin>>n;
	int a;
	cout<<"\nEnter the burst time";
	vector<int> v;
	for(int i=0;i<n;i++){
		cin>>a;
		v.push_back(a);

	}
	int WaitingTime=0;
	int ArrivalTime=0;
	cout<<"\nProcess\tBurstTime\tArrivalTime\tWaitingTime\tTurnAroundTime\n";
	for(int i=0;i<n;i++){
		ArrivalTime=ArrivalTime+v[i];
		cout<<"P"<<i<<"\t"<<v[i]<<"\t0\t"<<WaitingTime<<"\t"<<ArrivalTime<<"\n";
		WaitingTime=WaitingTime+v[i];
	}


	return 0;

}
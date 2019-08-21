#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size of queue";
	cin>>n;
	int arr[n];
	cout<<"enter the queue\n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"enter the initial position of the head";
	int head;
	cin>>head;
	int sum=0;
	for(int j=0;j<n;j++){
		sum=sum+abs(head-arr[j]);
		cout<<"Move from "<<head<<" to "<<arr[j]<<" with seek "<<abs(head-arr[j])<<endl;
		head=arr[j];

	}

	double d;
	d=sum/n;
	cout<<"Total seek time is \t"<<sum<<endl;
	cout<<"Average seek time is \t"<<d;






	return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
	map<int,int> m;
	queue<int> q;
	int n,quantum;
	cout<<"enter the no of processes";
	cin>>n;
	for(int a,i=0;i<n;i++){
		cin>>a;
		m.insert({i,a});
		q.push(i);
	}
// int arr[25],i=0;
	int tat[n];
	int time=0;
cout<<"enter the time quantum";
cin>>quantum;
while(q.size()!=0){
	// arr[i]=q.front();
	// i++;

	cout<<"\tProcess\t"<<q.front();
	if(m[q.front()]>quantum){
		cout<<"\t$$"<<quantum<<"$$\n";
		m[q.front()]=m[q.front()]-quantum;
		n=q.front();
		q.pop();
		q.push(n);
		time=time+3;

	}
	else{
		cout<<"\t$$"<<m[q.front()]<<"$$\n";
		q.pop();
		time=time+m[q.front()];
		cout<<"\n\n\n"<<time<<"\n\n\n";
	}


}

// for(int j=0;j<i;j++){

// }



	return 0;
}
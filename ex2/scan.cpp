#include<iostream>
#include<algorithm>
using namespace std;
// int posindex(int *arr,int head);
int main(){
int sum=0;;
int n;
cout<<"Enter the size of the queue \t";
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
	cin>>arr[i];
}

cout<<"\nEnter the head position";
int head;
cin>>head;
int head2=head;
sort(arr,arr+n);
// for(int j=0;j<n;j++){
// 	cout<<arr[j];
// }
int index,index1;
for(int j=0;j<n;j++){

	while(head>0){
		for(int i=0;i<n;i++){
			if(arr[i]>=head){
				index=i-1;
				// cout<<"Hi iam here";
				break;
			}
		}

		// cout<<" ALIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII";
		if(index==-1){
			sum=sum+head;
			cout<<"Move from "<<head<<" to "<<" 0 "<<" with a seektime of"<<head<<endl;
			head=0;
		}

		else{
			sum=sum+abs(head-arr[index]);
			cout<<"Move from "<<head<<" to "<<arr[index]<<" with a seektime of"<<abs(head-arr[index])<<endl;
			head=arr[index];
		}


	}


	for(int k=0;k<n;k++){

		if(arr[k]>head2){
			while(k<n){
				sum=sum+abs(head-arr[k]);
				cout<<"Move from "<<head<<" to "<<arr[k]<<" with a seektime of"<<abs(head-arr[k])<<endl;
				head=arr[k];
				k++;

			}
			cout<<" Total seektime is "<<sum;
			cout<<endl<<" Average seektime is "<<float(sum)/n;
			exit(0);
		}
	}

	// cout<<endl<<sum;

}



	return 0;
}


// int posindex(int *arr,int head){







// }
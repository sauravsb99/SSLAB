#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
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

	// while(head>arr[n]){
	// 	for(int i=0;i<n;i++){
	// 		if(arr[i]>=head){
	// 			index=i+1;
	// 			// cout<<"Hi iam here";
	// 			break;
	// 		}
	// 	}


	if(arr[j]>head){

		if(j==n-1){
			sum=sum+abs(head-arr[j]);
			cout<<"Move from "<<head<<" to "<<arr[j]<<" with a seektime of"<<abs(head-arr[j])<<endl;
			head=arr[j];
			sum=sum+abs(head-199);
			cout<<"Move from "<<head<<" to "<<" 199 "<<" with a seektime of"<<abs(head-199)<<endl;
			head=199;
			cout<<"Move from "<<head<<" to "<<" 0 "<<" with a seektime of"<<199<<endl;
			sum=sum+199;
		}

		else{
			sum=sum+abs(head-arr[j]);
			cout<<"Move from "<<head<<" to "<<arr[j]<<" with a seektime of"<<abs(head-arr[j])<<endl;
			head=arr[j];
		}

	}
}

head=0;
for(int k=0;k<n;k++){


	if(arr[k]>head && arr[k]<head2){

			sum=sum+abs(head-arr[k]);
			cout<<"Move from "<<head<<" to "<<arr[k]<<" with a seektime of"<<abs(head-arr[k])<<endl;
			head=arr[k];




	}
}

	// 	// cout<<" ALIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII";
	// 	if(index==n){
	// 		sum=sum+abs(head-199);
	// 		cout<<"Move from "<<head<<" to "<<" 199 "<<" with a seektime of"<<head<<endl;
	// 		head=199;
	// 	}

	// 	else{
	// 		sum=sum+abs(head-arr[index]);
	// 		cout<<"Move from "<<head<<" to "<<arr[index]<<" with a seektime of"<<abs(head-arr[index])<<endl;
	// 		head=arr[index];
	// 	}


	// }

	// head=0;
	// for(int k=0;k<n;k++){

	// 	if(arr[k]<head2){
	// 		// while(k<n){
	// 			sum=sum+abs(head-arr[k]);
	// 			cout<<"Move from "<<head<<" to "<<arr[k]<<" with a seektime of"<<abs(head-arr[k])<<endl;
	// 			head=arr[k];
	// 			k++;

	// 		// }
	// 		// cout<<" Total seektime is "<<sum;
	// 		// cout<<endl<<" Average seektime is "<<float(sum)/n;
	// 		// exit(0);
	// 	}
	// }

	cout<<endl<<"Total seektime is"<<sum<<endl;
	cout<<"Average seektime is"<<float(sum)/n;

// }





	return 0;
}
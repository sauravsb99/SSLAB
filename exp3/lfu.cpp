#include<bits/stdc++.h>
using namespace std;

bool ondo(int ele,int frame[],int size){
	for(int i=0;i<size;i++)
			if(ele==frame[i])
					return true;

return false;
			}


int main(){

vector<int> v;
int i=0;
int n;
cout<<"enter the no of elements";
cin>>n;
cout<<"\nenter the string\t"
for(i=0;i<n;i++){
	int a;
	cin>>a;
	v.push_back(a);

}
int frame[10];
cout<<"Enter the size of the frame";
int size;
cin>>size;
for(i=0;i<size;i++)
	frame[i]=-1;
int head=-1;
for(i=0;i<n;i++){

	if(!ondo(v[i],frame,size)&&!fullaano(frame,size))
			head++;
			frame[head]=v[i];


	}	




	return 0;
}
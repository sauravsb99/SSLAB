#include<iostream>
#include<vector>
using namespace std;
int main(){

	int all[10][10];
	int max[10][10];
	int avail[10];
	int need[10][10];

	int n,m;
	cout<<"enter the number of processes and the no of resources";
	cin>>n>>m;
	cout<<endl<<"enter the values in allocation matrix";

	int i,j;
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			cin>>all[i][j];

	cout<<"\n"<<"enter the values in the ";
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			cin>>max[i][j];

	cout<<"\nENter the values in the available matrix";
	for(i=0;i<m;i++)
		cin>>avail[i];


	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			need[i][j]=max[i][j]-all[i][j];
		}
	}
	
	cout<<"\nNEED MATRIX\n";
		for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cout<<need[i][j]<<"\t";
		}
		cout<<"\n";
	}
	
	
	cout<<endl;
	i=0;
	std::vector<int> safe;
	bool flag=true;
	bool flag1=true;
	while(flag){

				for(int g=0;g<safe.size();g++){
					if(safe[g]==i){
						i=(i+1)%n;
						g=0;
					}
				}

				flag1=true;
				int q=0;
				for(q=0;q<m;q++){
					if(avail[q]-need[i][q]<0){
						flag1=false;
						break;
					}

				}
				if(flag1)
					safe.push_back(i);

				for(q=0;q<m;q++){
					avail[q]=avail[q]+all[i][q];
				}



				i=(i+1)%n;


				if(safe.size()==n)
					flag=false;

	}


	for(i=0;i<safe.size();i++)
		cout<<"p"<<safe[i]<<"->";

	return 0;
}
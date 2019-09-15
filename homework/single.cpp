#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cout<<"enter the name of the directory";
	cin>>s;
	cout<<"\nenter the number of files";
	int n;
	cin>>n;
	vector<string> v;
	while(n--){
		int flag=0;
		cout<<"enter the file name";
		string temp;
		cin>>temp;
		for(int i=0;i<v.size();i++){
				if(v[i]==temp)
				{	flag=1;
					cout<<"Already existing file";
					break;
				}
		}
		if(flag==0)
			v.push_back(temp);
	}



	cout<<"The files are "<<endl;
	for(int j=0;j<v.size();j++)
		cout<<v[j]<<endl;


	return 0;
}
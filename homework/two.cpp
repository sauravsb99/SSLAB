#include<bits/stdc++.h>
int k=0;
using namespace std;
int main(){
	int a=0;
	vector<string> dir[10];
	bool cc=true;
	while(cc){
		string s;
		string f;
		cout<<"Do you want to enter a directory? (0)";
		cin>>a;
		if(!a){			
			cin>>s;
			dir[k].push_back(s);
			k++;		}
		
		else{
			// string f;
			int index=-1;
			cin>>s;
			cin>>f;
			for(int i=0;i<k;i++)
			{
			for(auto x: dir[i]){
					if(x==s)
					{
						index=i;
						break;
					}
				}
			}
			if(index>=0){
				dir[index].push_back(f);
			}
		}

		cout<<"do you want to continue 1";
		cin>>a;
		if(!a)
			cc=false;
	}

cout<<k<<endl;
for(int j=0;j<=k;j++){
	for(auto y : dir[j])
		cout<<y<<"->";
	cout<<endl;
}


	return 0;
}
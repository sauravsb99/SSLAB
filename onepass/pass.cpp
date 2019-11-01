#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<string>
using namespace std;
int main(){
	// std::vector<str> symtab;
	unordered_map<string,int>symtab;
	int LOCCTR=0;
	int staat=LOCCTR;
	string label,opcode,operand;
	while(true){
		cin>>label;
		if(label=="END"){
			LOCCTR-=3;
			break;
		}
		cin>>opcode;
		cin>>operand;
		if(label=="START"){

			LOCCTR=stoi(opcode);
			staat=LOCCTR;
			// cout<<LOCCTR;
		}

		else{
				int flag=0;
				unordered_map<string, int>::iterator itr;
				for(itr=symtab.begin();itr!=symtab.end();itr++){
					if(label==(itr->first)){
						flag=1;
						cout<<"\n***\tDuplicate\t***\n"<<"\t"<<label<<"\t"<<endl;
						break;
					}
				}
				if(flag==0&&label!="-"){
					symtab.insert(pair<string,int>(label,LOCCTR-3));
				}
				// LOCCTR+=3;





		}

		if(opcode=="RESW"){
			LOCCTR+=3*(stoi(operand));
		}
		else if(opcode=="RESB"){
			LOCCTR+=(stoi(operand));
		}
		else{
			LOCCTR+=3;
		}


	}
unordered_map<string,int>::iterator itra;
cout<<"\n***\t SYMTAB \t***\n";
for(itra=symtab.begin();itra!=symtab.end();itra++)
	cout<<itra->first<<"\t"<<itra->second<<endl;
cout<<"\n";
cout<<"\nLength\n";
cout<<endl<<(LOCCTR-staat);

	return 0;
}
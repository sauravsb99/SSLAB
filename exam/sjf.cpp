#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> v;
	v.push_back(6);
	v.push_back(8);
	v.push_back(7);
	v.push_back(8);
	// std::vector<char> v;
	vector<int>::iterator it;
	sort(it,it+v.size());
	// cout<<v.size();
	for(auto i : v)
		cout<<i;
	return 0;
}
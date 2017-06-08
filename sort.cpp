#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	int a[] = {4,2,8,10,9,7,6,5,3,1};
	vector<int> v;

	int i;
	for(i=0;i<sizeof(a)/sizeof(int);i++)
		v.push_back(a[i]);

	reverse(v.begin(),v.end());
	for(i=0;i<v.size();i++)
		cout<<v[i]<<endl;

	cout<<"------------"<<endl;

	sort(v.begin(),v.end());
	for(i=0;i<v.size();i++)
		cout<<v[i]<<endl;

}




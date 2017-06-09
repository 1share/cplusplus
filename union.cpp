#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	int a[] = {1,5,7,6,8};
	int b[] = {3,7,2,1,9,10};


	int al=5;
	int bl=6;

	vector<int> res(al+bl);
	vector<int> ::iterator it;


	sort(a,a+al);
	sort(b,b+bl);

	it = set_union(a,a+al,b,b+bl,res.begin());

	res.resize(it-res.begin());

	cout<<res.size()<<endl;

	for(it = res.begin();it !=res.end();it++)
		cout<<*it<<" ";
	
	cout<<endl;

	int i;
	for(i=0;i<res.size();i++)
		cout<<res[i]<<" ";

	cout<<endl;
	return 0;
}

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;


int main() {

	fstream inout("/tmp/cpp.log", ios::out|ios::app);
	
#if 0
	fstream inout;
	inout.open("/tmp/cpp.log", ios::out|ios::app); 
#endif
	
	inout<<"hello world\n";
	inout.write("aaaa\n", strlen("aaaa\n"));
	inout.close();

	inout.open("/tmp/cpp.log", ios::in);
	char s[1024];

	while(inout.getline(s,1024)) {
		cout<<s<<endl;
		s[0]='\0';
	}

	inout.clear();
	inout.seekg(0,ios::beg);

	while(inout.get(s,1024)) {
		inout.get();
		cout<<s<<endl;
		s[0]='\0';

	}

	inout.close();

}

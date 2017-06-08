#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

int main() {

	ofstream out("/tmp/iocpp.log",ios::app);
	
	out.write("hello world\n", strlen("hello world\n"));	
	out<<"byebye"<<endl;
	out.close();	

	char s[1024];

	ifstream in("/tmp/iocpp.log",ios::in);
	while(in.getline(s, 1024)) {
		cout<<s<<endl;
		s[0]='\0';
	}

	in.clear();
	in.seekg(0, ios::beg);
	while(in.get(s, 1024)) {
		in.get();
		cout<<s<<endl;
		s[0]='\0';
	}

	in.close();

}

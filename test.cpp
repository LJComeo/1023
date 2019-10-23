#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
using namespace std;


void filetest()
{
	/*ofstream ofs("1.txt");

	ofs << "hello, world" << endl;

	ofs.close();*/

	ifstream ifs("1.txt");
	char s[20];
	ifs.getline(s, 19);
	cout << s;

	ifs.close();
}

void stringtest()
{
	ostringstream oss;
	oss << "hello ,world!";
	cout << oss.str() << endl;
}

int test()
{
	//filetest();
	stringtest();

	//cerr << "error";



	return 0;
}
#include <iostream>
#include <fstream>
using namespace std;

//main函数可以递归


int main(int argc,const char *argv[])//argc代表的是参数的数量，但是至少为1
{
	int i;
	for (i = 0; i < argc; i++)
	{
		cout << argv[i];
	}

	return 0;

}

//int main(int argc,const char *argv[])
//{
//	if (argc != 3)
//	{
//		return -1;
//	}
//
//	ifstream ifs(argv[1], ifstream::binary);//要被从文件中以二进制形式输出
//	ofstream ofs(argv[2], ofstream::binary);//要以二进制形式输入到文件中去
//
//	char c;
//	while (!ifs.eof())//只要ifs不结束，就直接将ifs取一个，放到ofs中
//	{
//		ifs >> c;
//		ofs << c;
//	}
//
//	ifs.close();
//	ofs.close();
//
//
//	return 0;
//}
#include <iostream>
#include <fstream>
using namespace std;

//main�������Եݹ�


int main(int argc,const char *argv[])//argc������ǲ�������������������Ϊ1
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
//	ifstream ifs(argv[1], ifstream::binary);//Ҫ�����ļ����Զ�������ʽ���
//	ofstream ofs(argv[2], ofstream::binary);//Ҫ�Զ�������ʽ���뵽�ļ���ȥ
//
//	char c;
//	while (!ifs.eof())//ֻҪifs����������ֱ�ӽ�ifsȡһ�����ŵ�ofs��
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
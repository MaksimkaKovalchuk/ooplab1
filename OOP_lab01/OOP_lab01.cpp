// OOP_lab01.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
// ������ ���������� ������
class CppStudio // ��� ������
{
public: // ������������ �������
	void message() // ������� (����� ������) ��������� ��������� �� �����
	{
		cout << "website: cppstudio.com\ntheme: Classes and Objects in C + +\n";
	}
}; // ����� ���������� ������ CppStudio

int main(int argc, char* argv[])
{
	CppStudio objMessage; // ���������� �������
	objMessage.message(); // ����� ������� ������ message
	system("pause");
	return 0;
}
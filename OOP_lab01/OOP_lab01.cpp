// OOP_lab01.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
// начало объ€влени€ класса
class CppStudio // им€ класса
{
public: // спецификатор доступа
	void message() // функци€ (метод класса) вывод€ща€ сообщение на экран
	{
		cout << "3len";
		cout << "Dima Kozlovsky";
	}
}; // конец объ€влени€ класса CppStudio

int main(int argc, char* argv[])
{
	CppStudio objMessage; // объ€вление объекта
	objMessage.message(); // вызов функции класса message
	system("pause");
	return 0;
}
#include "country.h"
#include <iostream>
#include <string>
using namespace std;
//функция для возврата объекта как результата
country make_route()
{
	string s;
	int i;
	double d;

	cout << "Введите столицу: ";
	cin >> s;
	cout << "Введите количество человек: ";
	cin >> i;
	cout << "Введите площадь: ";
	cin >> d;
	country t(s, i, d);
	return t;
}
//функция для передачи объекта как параметра
void print_route(country t)
{
	t.show();
}
void main()
{
	setlocale(LC_ALL, "rus");
	//конструктор без параметров
	country t1;
	t1.show();
	//коструктор с параметрами
	country t2("Пермь", 2323, 24);
	t2.show();
	//конструктор копирования
	country t3 = t2;
	t3.set_Country("Нагорный");
	t3.set_quantity(123434);
	t3.set_Square(96);
	//конструктор копирования
	print_route(t3);
	//конструктор копирования
	t1 = make_route();
	t1.show();
}
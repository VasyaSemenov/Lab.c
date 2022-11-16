#include <iostream>
#include <string>
#include "country.h"
using namespace std;
country::country()
{
	Country = "";
	quantity = 1;
	Square = 0;
}
//конструктор с параметрами
country::country(string N, int K, double S)
{
	Country = N;
	quantity = K;
	Square = S;
}
//конструктор копирования
country::country(const country& t)
{
	Country = t.Country;
	quantity = t.quantity;
	Square = t.Square;
}
country::~country()
{
}
//селекторы
string country::get_Country()
{
	return Country;
}
int country::get_quantity()
{
	return quantity;
}
double country::get_Square()
{
	return Square;
}
//модификаторы
void country::set_Country(string N)
{
	Country = N;
}
void country::set_quantity(int K)
{
	quantity = K;
}
void country::set_Square(double S)
{
	Square = S;
}
//метод для просмотра атрибутов
void country::show()
{
	cout << "столица:" << Country << endl;
	cout << "количество человек:" << quantity << endl;
	cout << "площадь:" << Square << endl;
}
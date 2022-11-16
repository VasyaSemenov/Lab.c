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
//����������� � �����������
country::country(string N, int K, double S)
{
	Country = N;
	quantity = K;
	Square = S;
}
//����������� �����������
country::country(const country& t)
{
	Country = t.Country;
	quantity = t.quantity;
	Square = t.Square;
}
country::~country()
{
}
//���������
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
//������������
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
//����� ��� ��������� ���������
void country::show()
{
	cout << "�������:" << Country << endl;
	cout << "���������� �������:" << quantity << endl;
	cout << "�������:" << Square << endl;
}
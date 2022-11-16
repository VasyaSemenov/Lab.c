#pragma once
#include <iostream>
#include <string>
using namespace std;
class country
{
	string Country;
	int quantity;
	double Square;
public:
	country();//конструктор без параметров
	country(string, int, double);//конструктор с параметрами
	country(const country&);//конструктор копирования
	~country();//деструктор
	string get_Country();//селектор
	void set_Country(string);//модификатор
	int get_quantity();//селектор
	void set_quantity(int); //модификатор
	double get_Square();//селектор
	void set_Square(double); //модификатор
	void show();//просмотр атрибутов
};
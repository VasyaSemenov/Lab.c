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
	country();//����������� ��� ����������
	country(string, int, double);//����������� � �����������
	country(const country&);//����������� �����������
	~country();//����������
	string get_Country();//��������
	void set_Country(string);//�����������
	int get_quantity();//��������
	void set_quantity(int); //�����������
	double get_Square();//��������
	void set_Square(double); //�����������
	void show();//�������� ���������
};
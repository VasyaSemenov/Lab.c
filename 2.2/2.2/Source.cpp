#include "country.h"
#include <iostream>
#include <string>
using namespace std;
//������� ��� �������� ������� ��� ����������
country make_route()
{
	string s;
	int i;
	double d;

	cout << "������� �������: ";
	cin >> s;
	cout << "������� ���������� �������: ";
	cin >> i;
	cout << "������� �������: ";
	cin >> d;
	country t(s, i, d);
	return t;
}
//������� ��� �������� ������� ��� ���������
void print_route(country t)
{
	t.show();
}
void main()
{
	setlocale(LC_ALL, "rus");
	//����������� ��� ����������
	country t1;
	t1.show();
	//���������� � �����������
	country t2("�����", 2323, 24);
	t2.show();
	//����������� �����������
	country t3 = t2;
	t3.set_Country("��������");
	t3.set_quantity(123434);
	t3.set_Square(96);
	//����������� �����������
	print_route(t3);
	//����������� �����������
	t1 = make_route();
	t1.show();
}
#include <iostream>
#include "root.h"
using namespace std;
void root::Read()
{
	cout << "\n ������� A";
	cin >> first;
	cout << "\n ������� B ";
	cin >> second;
	if (first == 0) {
		cout << "\n ������� ����� A �������� �� 0";
		cin >> first;
	}
}
void root::Show()
{
	cout << "\n ��������� �=";
	cout << "\n ��������� B=";
	cout << "\n";
}
double root::Root()
{
	return (first) ? -second / first : 0;
}
int main() {
	setlocale(LC_ALL, "rus");
	root A;
	A.Read();
	A.Show();
	cout << "������ ���������� =" << A.Root() << endl;
	return(0);
}

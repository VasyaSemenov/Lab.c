#include <iostream>
#include "root.h"
using namespace std;
void root::Read()
{
	cout << "\n введите A";
	cin >> first;
	cout << "\n введите B ";
	cin >> second;
	if (first == 0) {
		cout << "\n введите число A отличное от 0";
		cin >> first;
	}
}
void root::Show()
{
	cout << "\n коэфицент А=";
	cout << "\n коэфицент B=";
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
	cout << "корень урравнения =" << A.Root() << endl;
	return(0);
}



#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int n;
	cout << "������� ������ �������: ";
	cin >> n;

	while (n <= 1)
	{
		cout << "������ ������� ������ ���� ������ 1 ";
		cout <<"������� ������ �������: ";
		cin >> n;
	}
	if (n > 1) {
		for (int i = 0; i < n; i++)
			cout << "*";
		cout << endl;

		for (int i = 0; i < n - 2; i++)
			cout << "*" << setw(n - 1) << "*" << endl;

		for (int i = 0; i < n; i++)
			cout <<"*";
		cout << endl;
	}
	return(0);
}
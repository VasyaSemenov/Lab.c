#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a, min, b;
	b = 0;
	cout << "\nEnter a";
	cin >> a;
	min = 1000000;
	if (a == 0) {
		while ((a == 0) && (b != 5))
		{
			cout << "�� ���� ���� ���������� ������";
			cin >> a;
			b++;
		}
		if (a == 0) cout << "����������������� �� ����������";
	}


	if (a != 0) {
		while (a != 0) {
			cout << "\nEnter a";
			cin >> a;

			if (a != 0 && a < min) min = a;


		}
		cout << "\nmin=" << min << "\n";
	}
	return(0);
}

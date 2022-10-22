

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int n;
	cout << "введите размер катета: ";
	cin >> n;
	while (n <= 1)
	{
		cout
			<<"размер катета должен быть больше 1 ";
		cout << "введите размер катета: ";
		cin >> n;
	}
	int p = n - 1;
	int z = 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j <= p; j++)
			cout << " ";
		for (int j = 1; j <= z; j++)
			cout << " *";
		z++; p--;
		cout << endl;
	}
	return(0);
}


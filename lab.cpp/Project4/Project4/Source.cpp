#include <iostream>
#include <stdlib.h>
using namespace std;
#include<iostream>


int main() {
	setlocale(LC_ALL, "ru");
	int n, m, k, a;
	int* mas1, * new_mas;
	cout<< "Âåäèòå ðàçìåð ìàñèâà n";
	cin >> n;
	if (n < 0) {
		while (n < 0) {
			cout << "Ââåäèòå äðóãîå ÷èñëî"<<endl;
			cin >> n;
		}
	}
	mas1 = new int[n];
	cout << "mas="<<endl;
	for (int i = 0; i < n; i++)
	{
		mas1[i] = rand() % 100;
		cout << mas1[i] << ' ';
	}
	k = 0;
	m = 0;
	do {
		cout << "Ââåäèòå íîìåð ñ êîòîðîãî äîáàâèòü"<<endl;
		cin >> k;

	} while ((k <= 0) && (k > n + 1));
	do {
		cout << "Ââåäèòå êîëè÷åñòâî ýëåìåíîâ"<<endl;
		cin >> m;
	} while (m <= 0);
	a = n + m;
	new_mas = new int[a];
	for (int i = 0; i < k; i++) {
		new_mas[i] = mas1[i];
	}
	for (int i = 0, j = k - 1; i < m; j++, i++) {
		cout << "Ââåäèòå ÷èñëî"<<endl;
		cin >> new_mas[j];
	}
	for (int i = (k-1+m), j = k - 1; j < n; j++, i++) {
				new_mas[i] = mas1[i];
			}
		cout << "mas2=";
		for (int i = 0; i < a; i++) {
			cout << new_mas[i] << " ";
		}
	delete[]mas1;

	return(0);
}

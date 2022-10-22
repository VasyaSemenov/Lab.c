#include <iostream>
#include <math.h>

using namespace std;

const double eps = 0.0001;

int main()
{
	setlocale(LC_ALL, "rus");
	double s, an;
	int n;
	s = 0;
	n = 1;
	an = 1 / pow(2, n) + 1 / pow(3, n);
	s += an;
	while (an >= eps) {
		s += an *= (pow(3, (n + 1)) + pow(2, (n + 1))) / (6 * pow(3, n) + 6 * pow(2, n));
		n++;

	}

	cout << "Ñóììà S = " << endl;
	cout << s;

	return(0);
}
#include <iostream>
#include <cstdlib>
#include <math.h>
#include <cmath>
using namespace std;
int main()
{
	const double pi = acos(-1.0);
	double e = 0.0001;
	double a = 0.1;
	double b = 1;
	int k = 10;
	int n = 25;
	int i1, i2, i3;
	double h = (b - a) / k;
	double x, sn, s1, s2, f;
	for (i1 = 0; i1 <= k; i1++) {
		x = a + i1 * h;
		f = (exp(x * cos(pi / 4))) * cos(x * sin(pi / 4));
		for (s1 = 0, i2 = 1; i2 <= n; i2++) {
			s1 += pow(x, i1) * (cos(i1 * pi / 4) / i1);
		}
		for (s2 = 0, sn = 1, i3 = 1; fabs(sn) >= e; i3++)
		{
			sn = pow(x, i2) * (cos(i2 * pi / 4) / i2);
			s2 += sn;
		}
		printf("x=%.2f sn=%f se=%f y=%f\n", x, s1, s2, f);
	}
	return(0);
}
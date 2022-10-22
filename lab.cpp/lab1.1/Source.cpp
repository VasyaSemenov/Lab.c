#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    float a1, b1, c1, d1, e1, res1(0);

    a1 = 1000;
    b1 = 0.0001;

    c1 = pow((a1 - b1), 3); d1 = pow(a1, 2); e1 = pow(b1, 2);

    res1 = c1 - a1 * (d1 - 3 * e1) / b1 * (e1 - 3 * d1);

    cout << "Резельтат для типа float равен " << res1 << "\n\n";

    double a2, b2, c2, d2, e2, res2(0);

    a2 = 1000;
    b2 = 0.0001;

    c2 = pow((a2 - b2), 3); d2 = pow(a2, 2); e2 = pow(b2, 2);

    res2 = c2 - a2 * (d2 - 3 * e2) / b2 * (e2 - 3 * d2);

    cout << "Резельтат для типа double равен " << res2 << "\n\n";
    return(0);
    
}
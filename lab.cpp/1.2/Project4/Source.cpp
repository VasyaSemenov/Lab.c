#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    int m, n;

    cout << "Введите два целых числа n и m: " << "\n\n";
    cin >> n >> m;

    cout << "Значение выражения n+++m = " << (m- ++n) << "\n";
    cout << "Значение выражения m-- >n = " << (++m > --n) << "\n";
    cout << "Значение выражения n-- >m = " << (--n < ++m) << "\n";

    return 0;
}
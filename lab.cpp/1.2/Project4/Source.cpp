#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    int m, n;

    cout << "������� ��� ����� ����� n � m: " << "\n\n";
    cin >> n >> m;

    cout << "�������� ��������� n+++m = " << (m- ++n) << "\n";
    cout << "�������� ��������� m-- >n = " << (++m > --n) << "\n";
    cout << "�������� ��������� n-- >m = " << (--n < ++m) << "\n";

    return 0;
}